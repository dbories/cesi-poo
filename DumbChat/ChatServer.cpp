#include "ChatServer.h"

void ChatServer::transferMessage(Message message)
{
    for (auto chatWindow : chatWindows) {
        if (chatWindow.currentUser.name == message.recipient.name && chatWindow.penpal.name == message.sender.name) {
            chatWindow.receiveMessage(message);
            return;
        }
    }
};

void ChatServer::startChat(User user1, User user2)
{
    ChatWindowReceiver chatWindowReceiver;
    chatWindowReceiver.currentUser = user2;
    chatWindowReceiver.penpal = user1;
    chatWindows.push_back(chatWindowReceiver);

    return;
};
