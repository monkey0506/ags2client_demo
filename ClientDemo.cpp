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
#include "ClientDemo.h"
using namespace AGS2Client::Demo;

ClientDemo& ClientDemo::GetClientDemo() noexcept
{
	static ClientDemo client{};
	return client;
}

bool ClientDemo::IsInitialized() const noexcept
{
	return false;
}

void ClientDemo::ResetStatsAndAchievements() const noexcept
{
}

char const* ClientDemo::GetUserName() const noexcept
{
	return nullptr;
}

void ClientDemo::Startup() const noexcept
{
}

void ClientDemo::Shutdown() const noexcept
{
}

void ClientDemo::Update() const noexcept
{
}

char const* ClientDemo::GetAGSPluginName() const noexcept
{
	return "AGS2Client Demo";
}

char const* ClientDemo::GetAGSPluginDesc() const noexcept
{
	return "AGS2Client: Client Plugin Interface for AGS (C) 2015-2016 MonkeyMoto Productions, Inc.";
}

float ClientDemo::GetVersion() const noexcept
{
	return 1.1f;
}

bool ClientDemo::ClaimKeyPress(int, int(*)(int)) const noexcept
{
	//bool isShift = ((data == 403) || (data == 404)); // is pressed key shift
	//bool isTab = (data == 9); // is pressed key tab
	//bool isShiftTab = ((data == 0x00001111) || // shift+tab as a single key
	//	((isShift) && (IsKeyPressed(9) != 0)) || // key is shift and tab is held
	//	((isTab) && ((IsKeyPressed(403) != 0) || (IsKeyPressed(404) != 0)))); // key is tab and shift is held
	//return isShiftTab; // Claim (Shift+Tab), ignore other keys
	return false;
}
