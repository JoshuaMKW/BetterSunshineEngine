#pragma once

#ifndef KURIBO_NO_TYPES
#define KURIBO_NO_TYPES
#endif

#ifndef HW_DOL
#define HW_DOL
#endif

#include "common_sdk.h"
#include <Dolphin/types.h>

#define BETTER_SMS_MODULE_NAME "BetterSunshineEngine"
#define BETTER_SMS_AUTHOR_NAME "JoshuaMK"

#ifndef BETTER_SMS_VERSION
#define BETTER_SMS_VERSION "(unknown version)"
#endif

#ifndef BETTER_SMS_MAX_SHINES
#define BETTER_SMS_MAX_SHINES 120
#else
#if BETTER_SMS_MAX_SHINES < 1
#undef BETTER_SMS_MAX_SHINES
#define BETTER_SMS_MAX_SHINES 1
#elif BETTER_SMS_MAX_SHINES > 999
#undef BETTER_SMS_MAX_SHINES
#define BETTER_SMS_MAX_SHINES 999
#endif
#endif

/* Misc compiler info */
#define BETTER_SMS_VERSION "v1.0"

#ifdef __VERSION__
#define BETTER_SMS_CC_VERSION __VERSION__
#elif defined(__CWCC__)
#define BETTER_SMS_CC_VERSION "CWCC " STRINGIZE(__CWCC__)
#else
#define BETTER_SMS_CC_VERSION "Unknown"
#endif

#if SMS_DEBUG
#define BETTER_SMS_VERSION_TAG                                                                     \
    "(DEBUG) " BETTER_SMS_VERSION "[" SMS_STRINGIZE(BETTER_SMS_MAX_SHINES) " Shines]"
#else
#define BETTER_SMS_VERSION_TAG                                                                     \
    "(RELEASE) " BETTER_SMS_VERSION "[" SMS_STRINGIZE(BETTER_SMS_MAX_SHINES) " Shines]"
#endif

/* CONFIGURATION DEFINES */

#ifndef BETTER_SMS_BUGFIXES
#define BETTER_SMS_BUGFIXES 1
#endif

#ifndef BETTER_SMS_CRASHFIXES
#define BETTER_SMS_CRASHFIXES 1
#endif

#ifndef BETTER_SMS_EXCEPTION_HANDLER
#define BETTER_SMS_EXCEPTION_HANDLER 1
#endif

#ifndef BETTER_SMS_SPC_LOGGING
#define BETTER_SMS_SPC_LOGGING 1
#endif

#ifndef BETTER_SMS_SLOT_B_SUPPORT
#define BETTER_SMS_SLOT_B_SUPPORT 1
#endif

#ifndef BETTER_SMS_EXTENDED_RENDER_DISTANCE
#define BETTER_SMS_EXTENDED_RENDER_DISTANCE 1
#endif

#ifndef BETTER_SMS_WIDESCREEN
#define BETTER_SMS_WIDESCREEN 1
#endif

#ifndef BETTER_SMS_CUSTOM_MUSIC
#define BETTER_SMS_CUSTOM_MUSIC 0
#endif

#ifndef BETTER_SMS_EXTRA_SHINES
#define BETTER_SMS_EXTRA_SHINES 1
#endif

#ifndef BETTER_SMS_EXTRA_OBJECTS
#define BETTER_SMS_EXTRA_OBJECTS 1
#endif

#ifndef BETTER_SMS_EXTRA_COLLISION
#define BETTER_SMS_EXTRA_COLLISION 1
#endif

#ifndef BETTER_SMS_NO_TITLE_THP
#define BETTER_SMS_NO_TITLE_THP 1
#endif

#ifndef BETTER_SMS_VANILLA_MOVESET
#define BETTER_SMS_VANILLA_MOVESET 0
#endif

#if !BETTER_SMS_VANILLA_MOVESET

#ifndef BETTER_SMS_LONG_JUMP
#define BETTER_SMS_LONG_JUMP 1
#endif

#ifndef BETTER_SMS_MULTI_JUMP
#define BETTER_SMS_MULTI_JUMP 1
#endif

#ifndef BETTER_SMS_HOVER_BURST
#define BETTER_SMS_HOVER_BURST 1
#endif

#ifndef BETTER_SMS_HOVER_SLIDE
#define BETTER_SMS_HOVER_SLIDE 1
#endif

#ifndef BETTER_SMS_ROCKET_DIVE
#define BETTER_SMS_ROCKET_DIVE 1
#endif

#else

#define BETTER_SMS_LONG_JUMP   0
#define BETTER_SMS_MULTI_JUMP  0
#define BETTER_SMS_HOVER_BURST 0
#define BETTER_SMS_HOVER_SLIDE 0
#define BETTER_SMS_ROCKET_DIVE 0

#endif

#ifndef BETTER_SMS_DYNAMIC_FALL_DAMAGE
#define BETTER_SMS_DYNAMIC_FALL_DAMAGE 1
#endif

#ifndef BETTER_SMS_NO_DOWNWARP
#define BETTER_SMS_NO_DOWNWARP 1
#endif

#ifndef BETTER_SMS_SHADOW_MARIO_HEALTHBAR
#define BETTER_SMS_SHADOW_MARIO_HEALTHBAR 1
#endif

#ifndef BETTER_SMS_GREEN_YOSHI
#define BETTER_SMS_GREEN_YOSHI 1
#endif

#ifndef BETTER_SMS_YOSHI_SAVE_NOZZLES
#define BETTER_SMS_YOSHI_SAVE_NOZZLES 1
#endif

#ifndef BETTER_SMS_UNDERWATER_FRUIT
#define BETTER_SMS_UNDERWATER_FRUIT 1
#endif

#ifndef BETTER_SMS_USE_PS_MATH
#define BETTER_SMS_USE_PS_MATH 1
#endif

namespace BetterSMS {
    bool isDebugMode();
}  // namespace BetterSMS

namespace BetterSMS {
    bool isGameEmulated();
    bool isMusicBeingStreamed();

    bool isDebugMode();
    void setDebugMode(bool);

    bool isMusicStreamingAllowed();
    void setMusicStreamingAllowed(bool);
}  // namespace BetterSMS