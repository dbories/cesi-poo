#pragma once

#include <iostream>
#include <string>

class Repeteur
{
private:
    std::string prefixe;

public:
    
    Repeteur(std::string prefixe) {
        this->prefixe = prefixe;
    }

    void doublerMessage(std::string message)
    {
        std::cout << prefixe << message << message << std::endl;
    }

    void triplerMessage(std::string message)
    {
        std::cout << prefixe << message << message << message << std::endl;
    }

    void inverserMessage(std::string message)
    {
        std::cout << prefixe;
        for (int i = message.length() - 1; i >= 0; i--) {
            std::cout << message[i];
        }
        std::cout << std::endl;
    }
};

