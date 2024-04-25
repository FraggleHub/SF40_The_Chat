#pragma once
#include <iostream>
#include <string>
#include "Chat111.h"

using namespace std;

/*
class Users {
public:
	Users(const string& name);
	string getName() const;

private:
	string name;
};

class Enterface {
protected:
	string currentUser;
public:
	Enterface() = default;
	Enterface(const string& currentUser);
	void checkUsers(Users* users, int size) const;
	void SendingMessage(string senderName);
	void CheckedMessage();
};
*/

struct Message {
	string sender;
	int rectID;
	string text;
};

class someMessage {
protected:
	int in, out;
	/*int all */ // пока думаю над этим
public:
	someMessage() = default;
	someMessage(int inMess, int outMess);
	string getSomeone();

};

class Messangers {
protected:
	string text;
	Users* usersArray;
	int userCount;
public:
	Messangers() = default;
	void WhosMessage(int count);
	void SendMessage();
	~Messangers();
};