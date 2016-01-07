// AGS2Client
// Client Plugin Interface for AGS
// Copyright © 2015-2016 MonkeyMoto Productions, Inc.
//
// This work is free. You can redistribute it and/or modify it under the
// terms of the Do What The Fuck You Want To Public License, Version 2,
// as published by Sam Hocevar. See the LICENSE file for more details.
//
//            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
//                    Version 2, December 2004
//
// Copyright (C) 2004 Sam Hocevar <sam@hocevar.net>
//
// Everyone is permitted to copy and distribute verbatim or modified
// copies of this license document, and changing it is allowed as long
// as the name is changed.
//
//            DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE
//   TERMS AND CONDITIONS FOR COPYING, DISTRIBUTION AND MODIFICATION
//
//  0. You just DO WHAT THE FUCK YOU WANT TO.
//
#include "ClientStatsDemo.h"
using namespace AGS2Client::Demo;

ClientStatsDemo& ClientStatsDemo::GetClientStatsDemo() noexcept
{
	static ClientStatsDemo stats{};
	return stats;
}

int ClientStatsDemo::GetIntStat(char const *) const noexcept
{
	return 0;
}

float ClientStatsDemo::GetFloatStat(char const*) const noexcept
{
	return 0.0f;
}

float ClientStatsDemo::GetAverageRateStat(char const*) const noexcept
{
	return 0.0f;
}

bool ClientStatsDemo::SetIntStat(char const*, int) const noexcept
{
	return false;
}

bool ClientStatsDemo::SetFloatStat(char const*, float) const noexcept
{
	return false;
}

bool ClientStatsDemo::UpdateAverageRateStat(char const*, float, float) const noexcept
{
	return false;
}
