#pragma once

#include <iostream>
#include <vector>

using namespace std;

class Users {
protected:
	int qqqq;

	string userData; // data from users
	vector<vector<string>> idUsers; // id from users in database

public:
	Users();

	void setUsers(int value); // first point and people in program
	void addUsers(size_t value); // add second people in program

	int getIdUsers(size_t value) const; // geting how many people in the program

	string getUsersInformation(int value) const; // get users data informations

	size_t getUserID() const; // get users id in the program

	void enteredProg(string login, string pass); // entering in chat manager;

	~Users();
};