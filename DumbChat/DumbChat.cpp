// DumbChat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "ChatWindow.h"

using namespace std;

int main()
{
    cout << "Bienvenue sur DumbChat!\n";
    ChatServer chatServer;
    
    cout << "Quel est votre nom ? ";
    string userName;
    std::getline(std::cin, userName);
    //cin >> userName;
    User user;
    user.name = userName;

    cout << "Chatter avec : ";
    string penpalName;
    std::getline(std::cin, penpalName);
    //cin >> penpalName;
    User penpal;
    penpal.name = penpalName;

    ChatWindow chatWindow;
    chatWindow.currentUser = user;
    chatWindow.penpal = penpal;
    chatWindow.chatServer.startChat(user, penpal);
    
    string texteMessage;
    while (true)
    {
        cout << "Message a " << penpalName << " : ";
        std::getline(std::cin, texteMessage);
        //cin >> texteMessage;
        if (texteMessage == "exit") {
            break;
        }
        chatWindow.sendMessage(texteMessage);
    }

}
