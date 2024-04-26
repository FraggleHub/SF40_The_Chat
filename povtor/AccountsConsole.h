#pragma once
#include <iostream>
#include <string>
#include "Chat111.h"

using namespace std;

class someMessage {
protected:
	int _in, _out; // отправка от кого - кому
	int _all; // использоваться будет только, если отправка всем пользователям сообщения
	string _text; // сам текст сообщения
public:
	someMessage(int in, int out, string text);
	void allMessage(int all, string text);
	string getSomeone();

};

class Messangers {
protected:
	Users* usersArray;
	int userCount;
public:
	Messangers() = default;
	void WhosMessage(int count);
	void SendMessage();
	~Messangers();
};