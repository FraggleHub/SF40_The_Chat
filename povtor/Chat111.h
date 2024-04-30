/*
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
protected:
	std::string password;
	std::string userName;
	int newUserID;
public:
	User(std::string password, std::string userName, int newUserID);
	User()=default;
	std::string getPassword();
	std::string getUserName();
	int getNewUserID();
};
class Chatss
{
private:
	User* currentUser;// Variable for current user
public:
	std::vector<Message> messageHistory;
	std::vector<std::vector<User>> userDatabase;
	Chatss()=default;
	bool registerUser(std::string userName, std::string password);
	bool login(std::string userName, std::string password, int newUserID);
	void logout();
	void showAllUsers();// Show all registered users
	void sendMessageUser( std::string senderName); //We find the recipient by ID and send him a message
	void checkMessage();
	
};
*/
#pragma once
#include <string>

using namespace std;
static int usersCount = 0;
static int number_users = 5;

class Users
{
protected:
	string login;
	string password;
	string name;
	int id;
public:
	Users(int id, string login, string password, string name);
	Users() = default;
	~Users();
	string getLogin();
	string getPassword();
	string getName();
	int getId();
};
class NewChat
{
protected:
	static int UserId;
	Users* usersArray = new Users[number_users];
	
public:
	void Prog();
	NewChat();
	~NewChat();
	bool registerUser(string login, string password, string name);
	bool Entered(string login, string password);
	void dataUser();
	void showAllUsers();
	void resizer();

};