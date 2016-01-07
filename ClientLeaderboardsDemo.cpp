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
#include "ClientLeaderboardsDemo.h"
using namespace AGS2Client::Demo;

ClientLeaderboardsDemo& ClientLeaderboardsDemo::GetClientLeaderboardsDemo() noexcept
{
	static ClientLeaderboardsDemo leaderboards{};
	return leaderboards;
}

void ClientLeaderboardsDemo::RequestLeaderboard(char const*, AGS2Client::LeaderboardScoreType, int limit) const noexcept
{
}

bool ClientLeaderboardsDemo::UploadScore(int) const noexcept
{
	return false;
}

char const* ClientLeaderboardsDemo::GetCurrentLeaderboardName() const noexcept
{
	return nullptr;
}

char const* ClientLeaderboardsDemo::GetLeaderName(int) const noexcept
{
	return nullptr;
}

int ClientLeaderboardsDemo::GetLeaderScore(int) const noexcept
{
	return 0;
}

int ClientLeaderboardsDemo::GetLeaderCount() const noexcept
{
	return 0;
}
