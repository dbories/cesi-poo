#pragma once

#include <iostream>
#include <string>
#include "Repeteur.h"

class Emetteur
{
    public:
        void envoyer(Repeteur objet, void (Repeteur::* action)(std::string), std::string message)
        {
            (objet.*action)(message);
        }
};

