#ifndef GUARD_DEBUG_H
#define GUARD_DEBUG_H

// Un/comment to enable/disable the debug mode
#define DEBUG_MODE_ENABLED

// Combo of keys that open the debug menu
#define UNLOCK_DEBUG_MENU_COMBO (L_BUTTON | R_BUTTON)

#ifdef DEBUG_MODE_ENABLED
void Debug_ShowMainMenu(void);
#endif

#endif // GUARD_DEBUG_H
