#pragma once

#include <TiltedCore/Stl.hpp>
#include <Messages/Message.h>
#include <MetaMessage.h>

#include <Messages/AuthenticationResponse.h>
#include <Messages/AssignCharacterResponse.h>
#include <Messages/ServerReferencesMoveRequest.h>
#include <Messages/ServerScriptUpdate.h>
#include <Messages/ServerTimeSettings.h>
#include <Messages/CharacterSpawnRequest.h>
#include <Messages/NotifyInventoryChanges.h>
#include <Messages/NotifyFactionsChanges.h>
#include <Messages/NotifyRemoveCharacter.h>
#include <Messages/NotifyQuestUpdate.h>
#include <Messages/NotifyPlayerList.h>
#include <Messages/NotifyPartyInfo.h>
#include <Messages/NotifyPartyInvite.h>
#include <Messages/NotifyActorValueChanges.h>
#include <Messages/NotifyActorMaxValueChanges.h>
#include <Messages/NotifyHealthChangeBroadcast.h>
#include <Messages/NotifySpawnData.h>
#include <Messages/NotifyActivate.h>
#include <Messages/NotifyLockChange.h>
#include <Messages/AssignObjectsResponse.h>
#include <Messages/NotifyDeathStateChange.h>
#include <Messages/NotifyOwnershipTransfer.h>

using TiltedPhoques::UniquePtr;

struct ServerMessageFactory
{
    UniquePtr<ServerMessage> Extract(TiltedPhoques::Buffer::Reader& aReader) const noexcept;

    template <class T> static auto Visit(T&& func)
    {
        auto s_visitor =
            CreateMessageVisitor<AuthenticationResponse, AssignCharacterResponse, ServerReferencesMoveRequest,
                                 ServerScriptUpdate, ServerTimeSettings, CharacterSpawnRequest, NotifyInventoryChanges,
                                 NotifyFactionsChanges, NotifyRemoveCharacter, NotifyQuestUpdate, NotifyPlayerList,
                                 NotifyPartyInfo, NotifyPartyInvite, NotifyActorValueChanges,
                                 NotifyActorMaxValueChanges, NotifyHealthChangeBroadcast, NotifySpawnData, NotifyActivate,
                                 NotifyLockChange, AssignObjectsResponse, NotifyDeathStateChange, NotifyOwnershipTransfer>;

        return s_visitor(std::forward<T>(func));
    }
};
