#include "Users.h"
#include <iostream>
#include <vector>

using namespace std;

Users::Users() { }

void Users::setUsers(int value) {
	string text;
	for (int i = 0; i < value; i++) {
		vector<string> userData;
		for (int j = 0; j < 3; j++) {
			cout << "Take turns: Login, Pass, Name: ";
			cin >> text;
			cout << endl;
			userData.push_back(text); // add last position from vector information user
		}
		idUsers.push_back(userData); // add last position in vector id users
	}
}