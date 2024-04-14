#pragma once
#include <iostream>
#include <vector>
#include "Chat111.h"

using namespace std;

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
