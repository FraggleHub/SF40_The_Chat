#pragma once
#include <iostream>
#include <string>
#include "Chat111.h"

class someMessage {
protected:
	int _in, _out; // отправка от кого - кому
public:
	someMessage(int in, int out);
	void allMessage(int all);
};

class Messangers {
protected:
	Users* usersArray;
	int userCount;
	string nameUser;
public:
	Messangers() = default;
	void WhosMessage(int count, int in);
	~Messangers();
};