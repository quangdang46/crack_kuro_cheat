#pragma once

// PlayerUnknown's Battle Ground Mobile (1.7.0) SDK by Kur0

#include <set>
#include <string>
#include <iostream>
#include <string>
#include <unordered_set>
#include <codecvt>

#if defined(__LP64__)
#include "SDK64/PUBGM_Basic.hpp"

#include "SDK64/PUBGM_CoreUObject_classes.hpp"
#include "SDK64/PUBGM_CoreUObject_parameters.hpp"

#include "SDK64/PUBGM_Engine_classes.hpp"
#include "SDK64/PUBGM_Engine_parameters.hpp"

#include "SDK64/PUBGM_ShadowTrackerExtra_classes.hpp"
#include "SDK64/PUBGM_ShadowTrackerExtra_parameters.hpp"

#include "SDK64/PUBGM_Client_classes.hpp"
#include "SDK64/PUBGM_Client_parameters.hpp"

#include "SDK64/PUBGM_UMG_classes.hpp"
#include "SDK64/PUBGM_UMG_parameters.hpp"

#include "SDK64/PUBGM_Gameplay_classes.hpp"
#include "SDK64/PUBGM_Gameplay_parameters.hpp"
#else
#include "SDK/PUBGM_Basic.hpp"

#include "SDK/PUBGM_CoreUObject_classes.hpp"
#include "SDK/PUBGM_CoreUObject_parameters.hpp"

#include "SDK/PUBGM_Engine_classes.hpp"
#include "SDK/PUBGM_Engine_parameters.hpp"

#include "SDK/PUBGM_ShadowTrackerExtra_classes.hpp"
#include "SDK/PUBGM_ShadowTrackerExtra_parameters.hpp"

#include "SDK/PUBGM_Client_classes.hpp"
#include "SDK/PUBGM_Client_parameters.hpp"

#include "SDK/PUBGM_UMG_classes.hpp"
#include "SDK/PUBGM_UMG_parameters.hpp"

#include "SDK/PUBGM_Gameplay_classes.hpp"
#include "SDK/PUBGM_Gameplay_parameters.hpp"
#endif