#include <iostream>
#include <fstream>
#include "ChatWindow.h"

using namespace std;

void ChatWindow::sendMessage(string messageText)
{
    Message message;
    message.sender = currentUser;
    message.recipient = penpal;
    message.text = messageText;
    chatServer.transferMessage(message);
};
