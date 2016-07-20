// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX d
#define PREFIX MFFA

#define MAJOR 1
#define MINOR 3
#define PATCHLVL 0
#define BUILD 0

#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.62
#define REQUIRED_CBA_VERSION {3,0,0}

#ifdef COMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(MFFA - COMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(MFFA - COMPONENT)
#endif
