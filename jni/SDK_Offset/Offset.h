#pragma once

#ifndef NBCHAX_OFFSET_H
#define NBCHAX_OFFSET_H

#include <cstdint>
#include <string>
#include <cstdint>
const char *GamePKG = "com.vng.pubgmobile";
uintptr_t GEngine_Offset;
uintptr_t GNames_Offset;
uintptr_t GUObject_Offset;
uintptr_t GNativeAndroidApp_Offset;
uintptr_t Actors_Offset;
uintptr_t GetActorArray_Offset;
__attribute__((constructor)) void OffsetHax() {
    if (GamePKG == "com.vng.pubgmobile" ||
        GamePKG == "com.tencent.ig" ||
        GamePKG == "com.pubg.krmobile" ||
        GamePKG == "com.rekoo.pubgm") {
        
        GEngine_Offset = 0x8d77cc8;
        GNames_Offset = 0x47e6fac;
        GUObject_Offset = 0x9113670;
        Actors_Offset = 0x70;
		GetActorArray_Offset = 0x611fb50;
    } 
}

#endif //NBCHAX_OFFSET_H
