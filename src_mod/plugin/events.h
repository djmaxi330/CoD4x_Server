#pragma once
#include "shared.h"
///////////////////////////////////////////////////////////////////////////////
// events.h - declaration of exported from plugin functions.
//      Any event once added must exist in all the future versions.

///////////////////////////////////////////////////////////////////////////////
// Obvious.
DECL_IN_DLL void onPluginLoad();

///////////////////////////////////////////////////////////////////////////////
// Obvious.
DECL_IN_DLL void onPluginUnload();
