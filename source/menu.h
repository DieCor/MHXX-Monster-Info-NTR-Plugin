#pragma once

#include "global.h"
#include "ov.h"
#include "settings.h"
#include "mem_ops.h"
#include "monster.h"

#define MENU_ACTIVATE (BUTTON_L | BUTTON_SE)
#define MENU_DEACTIVATE (BUTTON_B)
#define BTN_WAIT_TICK_COUNT 35000000

typedef struct
{
  u8 is_active;
  u8 is_busy;
} MenuState;

static u32 displayDebugMenu(u32 key, volatile MenuState* menu);

u32 displayMenu(u32 key, volatile Settings *settings, volatile MenuState* menu);
