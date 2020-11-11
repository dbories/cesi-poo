#include <iostream>
#include <fstream>
#include "ChatWindowReceiver.h"


void ChatWindowReceiver::receiveMessage(Message message)
{
    ofstream chatFile;
    //string chatFilePath = "D:\\chat\\" + currentUser.name + "\\" + message.sender.name;
    string chatFilePath = message.sender.name + ".txt";
    chatFile.open(chatFilePath, ios::out | ios::app);
    chatFile << message.sender.name << " dit : " << message.text << endl;
    chatFile.close();
};
