#pragma once
#include <vector>
#include <string>
struct Message {
	std::string sender;
	int recipientID;
	std::string text;
};

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
	void showAllUsers();// Show all registered users
	void sendMessageUser( std::string senderName); //We find the recipient by ID and send him a message
	void checkMessage();
};
