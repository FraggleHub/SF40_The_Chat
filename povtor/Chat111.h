#pragma once
#include <vector>
#include <string>

class User
{
private:
	std::string password;
	std::string userName;
	int newUserID;
public:
	User(std::string password, std::string userName, int newUserID);
	User();
	std::string getPassword()const;
	std::string getUserName() const;
	int getNewUserID()const;
};
class Chat
{
private:
	User* currentUser;// Variable for current user
public:
	std::vector<std::vector<User>> userDatabase;
	Chat();
	bool registerUser(std::string userName, std::string password);
	bool login(std::string userName, std::string password, int newUserID);
	void logout();
};
