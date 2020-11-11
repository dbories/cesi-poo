#ifndef CHATWINDOW_H
#define CHATWINDOW_H

#include "User.h"
#include "Message.h"
#include "ChatServer.h"

class ChatWindow
{
    public:
        User currentUser;
        User penpal;
        ChatServer chatServer;
        void sendMessage(string messageText);

};

#endif