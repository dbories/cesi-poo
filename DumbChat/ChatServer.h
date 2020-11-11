#ifndef CHATSERVER_H
#define CHATSERVER_H

#include <vector>
#include "Message.h"
#include "ChatWindowReceiver.h"

using namespace std;

class ChatServer
{

    public:
        vector<ChatWindowReceiver> chatWindows;
        void transferMessage(Message message);

        void startChat(User user1, User user2);

};

#endif