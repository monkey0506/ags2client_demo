// AGS2Client
// Client Plugin Interface for AGS
// Copyright � 2015 MonkeyMoto Productions, Inc.
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
#ifndef AGS2CLIENT_CLIENTACHIEVEMENTSDEMO_H
#define AGS2CLIENT_CLIENTACHIEVEMENTSDEMO_H

#include "ags2client/IClientAchievements.h"

namespace AGS2Client
{
    namespace Demo
    {
        class ClientAchievementsDemo : public IClientAchievements
        {
        public:
            bool ResetAchievement(char const*) const override
            {
                return true;
            }

            bool IsAchievementAchieved(char const*) const override
            {
                return false;
            }

            bool SetAchievementAchieved(char const*) const override
            {
                return false;
            }

            ~ClientAchievementsDemo()
            {
            }
        };

        ClientAchievementsDemo& GetClientAchievementsDemo();
    } // namespace Demo
} // namespace AGS2Client

#endif // AGS2CLIENT_CLIENTACHIEVEMENTSDEMO_H
