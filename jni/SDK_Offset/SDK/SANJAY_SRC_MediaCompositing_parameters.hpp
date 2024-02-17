#pragma once

// Pubg Mobile Beta (3.0) SDK by Telegram @Sanjay_Src

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MediaCompositing.MediaPlaneComponent.SetMediaPlane
struct UMediaPlaneComponent_SetMediaPlane_Params
{
	struct FMediaPlaneParameters                       Plane;                                                    // (Parm)
};

// Function MediaCompositing.MediaPlaneComponent.OnRenderTextureChanged
struct UMediaPlaneComponent_OnRenderTextureChanged_Params
{
};

// Function MediaCompositing.MediaPlaneComponent.GetPlane
struct UMediaPlaneComponent_GetPlane_Params
{
	struct FMediaPlaneParameters                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

