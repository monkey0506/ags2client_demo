// AGS2Client
// Client Plugin Interface for AGS
// Copyright © 2015 MonkeyMoto Productions, Inc.
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
#ifndef AGS2CLIENT_CLIENTDEMO_H
#define AGS2CLIENT_CLIENTDEMO_H

#include "ags2client/IAGS2Client.h"

namespace AGS2Client
{
    namespace Demo
    {
        class ClientDemo : public IAGS2Client
        {
        public:
            void AttemptDefaultInitialization() const override
            {
            }

            bool IsInitialized() const override
            {
                return false;
            }

            void ResetStatsAndAchievements() const override
            {
            }

            char const* GetCurrentGameLanguage() const override
            {
                return nullptr;
            }

            char const* GetUserName() const override
            {
                return nullptr;
            }

            void Shutdown() const override
            {
            }

            void Update() const override
            {
            }

            char const* GetAGSScriptHeader(float version = 1.0f) const override
            {
                //return "\r\n";
                return IAGS2Client::GetAGSScriptHeader(version);
            }

            char const* GetAGSPluginName() const override
            {
                return "AGS2Client Demo";
            }

            char const* GetAGSPluginDesc() const override
            {
                return "AGS2Client: Client Plugin Interface for AGS (C) 2015 MonkeyMoto Productions, Inc.";
            }

            bool ClaimKeyPress(int, int(*)(int)) const override
            {
                //bool isShift = ((data == 403) || (data == 404)); // is pressed key shift
                //bool isTab = (data == 9); // is pressed key tab
                //bool isShiftTab = ((data == 0x00001111) || // shift+tab as a single key
                //	((isShift) && (IsKeyPressed(9) != 0)) || // key is shift and tab is held
                //	((isTab) && ((IsKeyPressed(403) != 0) || (IsKeyPressed(404) != 0)))); // key is tab and shift is held
                //return isShiftTab; // Claim (Shift+Tab), ignore other keys
                return false;
            }

            ~ClientDemo()
            {
            }
        };

        ClientDemo& GetClientDemo();
    } // namespace Demo
} // namespace AGS2Client

#endif // AGS2CLIENT_CLIENTDEMO_H
