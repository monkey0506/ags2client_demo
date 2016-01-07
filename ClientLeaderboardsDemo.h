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
#ifndef AGS2CLIENT_CLIENTLEADERBOARDSDEMO_H
#define AGS2CLIENT_CLIENTLEADERBOARDSDEMO_H

#include "ags2client/IClientLeaderboards.h"

namespace AGS2Client
{
    namespace Demo
    {
        class ClientLeaderboardsDemo : public IClientLeaderboards
        {
		protected:
			ClientLeaderboardsDemo() noexcept = default;

        public:
			static ClientLeaderboardsDemo& GetClientLeaderboardsDemo() noexcept;
			~ClientLeaderboardsDemo() noexcept = default;
			void RequestLeaderboard(char const*, LeaderboardScoreType, int limit) const noexcept override;
			bool UploadScore(int score) const noexcept override;
			char const* GetCurrentLeaderboardName() const noexcept override;
			char const* GetLeaderName(int index) const noexcept override;
			int GetLeaderScore(int index) const noexcept override;
			int GetLeaderCount() const noexcept override;
        };

        ClientLeaderboardsDemo& GetClientLeaderboardsDemo();
    } // namespace Demo
} // namespace AGS2Client

#endif // AGS2CLIENT_CLIENTLEADERBOARDSDEMO_H
