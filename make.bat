@echo off
setlocal enabledelayedexpansion

if not exist "@MFFA" mkdir "@MFFA"
if not exist "@MFFA\addons" mkdir "@MFFA\addons"
if not exist "@MFFA\optionals" mkdir "@MFFA\optionals"

if "%PROCESSOR_ARCHITECTURE%"=="AMD64" (set armake=tools\armake_w64.exe) else (set armake=tools\armake_w32.exe)

for /d %%f in (addons\*) do (
    set folder=%%f
    set name=!folder:addons\=!
    echo   PBO  @MFFA\addons\MFFA_!name!.pbo
    !armake! build -w unquoted-string -w redefinition-wo-undef -f !folder! @MFFA\addons\MFFA_!name!.pbo
)

for /d %%f in (optionals\*) do (
    set folder=%%f
    set name=!folder:optionals\=!
    echo   PBO  @MFFA\optionals\MFFA_!name!.pbo
    !armake! build -w unquoted-string -w redefinition-wo-undef -f !folder! @MFFA\optionals\MFFA_!name!.pbo
)

pause
