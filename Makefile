MAJOR = $(shell grep "^\#define[[:space:]]*MAJOR" addons/main/script_mod.hpp | egrep -m 1 -o '[[:digit:]]+')
MINOR = $(shell grep "^\#define[[:space:]]*MINOR" addons/main/script_mod.hpp | egrep -m 1 -o '[[:digit:]]+')
PATCH = $(shell grep "^\#define[[:space:]]*PATCHLVL" addons/main/script_mod.hpp | egrep -m 1 -o '[[:digit:]]+')
BUILD = $(shell grep "^\#define[[:space:]]*BUILD" addons/main/script_mod.hpp | egrep -m 1 -o '[[:digit:]]+')
VERSION = $(MAJOR).$(MINOR).$(PATCH)
VERSION_FULL = $(VERSION).$(BUILD)
PREFIX = MFFA
BIN = @MFFA
ZIP = MFFA
CBA = tools/cba
FLAGS = -i $(CBA) -w unquoted-string -w redefinition-wo-undef

$(BIN)/addons/$(PREFIX)_%.pbo: addons/%
	@mkdir -p $(BIN)/addons
	@echo "  PBO  $@"
	@armake build ${FLAGS} -f $< $@

# Shortcut for building single addons (eg. "make <component>.pbo")
%.pbo:
	"$(MAKE)" $(MAKEFLAGS) $(patsubst %, $(BIN)/addons/$(PREFIX)_%, $@)

all: $(patsubst addons/%, $(BIN)/addons/$(PREFIX)_%.pbo, $(wildcard addons/*))

filepatching:
	"$(MAKE)" $(MAKEFLAGS) FLAGS="-i $(CBA) -w unquoted-string -p"

$(BIN)/keys/%.biprivatekey:
	@mkdir -p $(BIN)/keys
	@echo "  KEY  $@"
	@armake keygen -f $(patsubst $(BIN)/keys/%.biprivatekey, $(BIN)/keys/%, $@)

$(BIN)/addons/$(PREFIX)_%.pbo.$(PREFIX)_$(VERSION_FULL).bisign: $(BIN)/addons/$(PREFIX)_%.pbo $(BIN)/keys/$(PREFIX)_$(VERSION_FULL).biprivatekey
	@echo "  SIG  $@"
	@armake sign -f $(BIN)/keys/ace_$(VERSION_FULL).biprivatekey $<

signatures: $(patsubst addons/%, $(BIN)/addons/$(PREFIX)_%.pbo.$(PREFIX)_$(VERSION_FULL).bisign, $(wildcard addons/*))

clean:
	rm -rf $(BIN) $(ZIP)_*.zip

release:
	@"$(MAKE)" clean
	@"$(MAKE)" $(MAKEFLAGS) signatures
	@echo "  ZIP  MFFA_$(VERSION).zip"
	@cp *readme.md mod.cpp classnames.txt MFFA_logo.paa $(BIN)
	@zip -r $(ZIP)_$(VERSION).zip $(BIN) &> /dev/null

.PHONY: release
