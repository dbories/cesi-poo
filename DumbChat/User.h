#ifndef USER_H
#define USER_H
#include <string>

using namespace std;

class User
{
public: 
	string name;
	User amis[]; // Ca ne compile pas, A vous de voir pourquoi :)
	
};

#endif