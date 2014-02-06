/********************************************************************************************
* Twitch Broadcasting SDK
*
* This software is supplied under the terms of a license agreement with Justin.tv Inc. and
* may not be copied or used except in accordance with the terms of that agreement
* Copyright (c) 2012-2014 Justin.tv Inc.
*********************************************************************************************/

#pragma once

#include "twitchcore/types/memorytypes.h"

namespace ttv
{
	extern TTV_AllocCallback gAllocCallback;
	extern TTV_FreeCallback gFreeCallback;

	void* AlignedAlloc(size_t size, size_t alignment);
}