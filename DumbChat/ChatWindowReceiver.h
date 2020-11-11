#pragma once
#include "User.h"
#include "Message.h"
class ChatWindowReceiver
{
public :
    User currentUser;
    User penpal;
    void receiveMessage(Message message);
};

