#include <Dolphin/MTX.h>
#include <JSystem/JGeometry.hxx>
#include <SMS/actor/Mario.hxx>
#include <SMS/raw_fn.hxx>
#include <SMS/sound/MSound.hxx>
#include <SMS/sound/MSoundSESystem.hxx>

#include "geometry.hxx"
#include "module.hxx"

#if BETTER_SMS_EXTRA_COLLISION

/* extern to handlers.cpp */

void setGravityCol(TMario *player) {
    player->mJumpParams.mGravity.set(static_cast<f32>(player->mFloorTriangle->mValue4) / 100.0f);
}

void antiGravityCol(TMario *player) {
    Vec position;
    player->JSGGetTranslation(&position);

    if ((position.y - player->mFloorTriangle->mMaxHeight) > player->mFloorTriangle->mValue4 &&
        player->mFloorTriangle->mValue4 != 0)
        return;

    player->mSpeed.y = 10.0f;
    if ((player->mState & static_cast<u32>(TMario::STATE_AIRBORN)) == false) {
        position.y += 1.0f;
        player->JSGSetTranslation(position);
        changePlayerStatus__6TMarioFUlUlb(player, static_cast<u32>(TMario::STATE_FALL), 0, 0);
    }
    if (player->mState == static_cast<u32>(TMario::STATE_FALL))
        player->mSubStateTimer = 0;
}

#endif