#ifndef MESSAGE_H
#define MESSAGE_H

#include <string>
#include "User.h"

using namespace std;

class Message
{
	public:
		string text;
		User sender;
		User recipient;
};

#endif