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
#ifndef AGS2CLIENT_CLIENTDEMO_H
#define AGS2CLIENT_CLIENTDEMO_H

#include "ags2client/IAGS2Client.h"

namespace AGS2Client
{
    namespace Demo
    {
        class ClientDemo : public IAGS2Client
        {
		protected:
			ClientDemo() noexcept = default;

        public:
			static ClientDemo& GetClientDemo() noexcept;
			~ClientDemo() noexcept = default;
			bool IsInitialized() const noexcept override;
            void ResetStatsAndAchievements() const noexcept override;
            char const* GetUserName() const noexcept override;
			void Startup() const noexcept override;
            void Shutdown() const noexcept override;
            void Update() const noexcept override;
            char const* GetAGSPluginName() const noexcept override;
            char const* GetAGSPluginDesc() const noexcept override;
			float GetVersion() const noexcept override;
            bool ClaimKeyPress(int, int(*)(int)) const noexcept override;
        };
    } // namespace Demo
} // namespace AGS2Client

#endif // AGS2CLIENT_CLIENTDEMO_H
