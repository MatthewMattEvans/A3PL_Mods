#include "\fyd_common\script_component.hpp"

#define COMPONENT main
#include "\fyd_common\functions\script_mod.hpp"

#ifdef DEBUG_ENABLED_MAIN
  #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_MAIN
  #define DEBUG_SETTINGS DEBUG_SETTINGS_MAIN
#endif

#include "\fyd_common\functions\script_macros.hpp"