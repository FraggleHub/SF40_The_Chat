#include "Chat111.h"

User::User(std::string password, std::string userName, int newUserID) :password(password), userName(userName), newUserID(newUserID) {}


std::string User::getPassword() const
{
	return password;
}

std::string User::getUserName() const
{
	return userName;
}

int User::getNewUserID() const
{
	return newUserID;
}

bool Chat::registerUser(std::string userName, std::string password)
{
    for (auto& users : userDatabase) {
        for (const User& user : users) {
            if (user.getUserName() == userName) {
                std::cout << "��� ������������ ��� ���������� " << userName << std::endl;
                return false;
            }
        }
    }
    int newUserID = userDatabase.size() + 1;
    userDatabase.push_back({ User(password, userName, newUserID) });
    std::cout << "������������ ���������������: id " << newUserID << std::endl;
    return true;
}

bool Chat::login(std::string userName, std::string password, int newUserID)
{
    for (auto& users : userDatabase) {
        for (User& user : users) {
            if (user.getUserName() == userName && user.getPassword() == password) {
                std::cout << "���� ��������: " << userName << " " << "id: " << user.getNewUserID() << std::endl;
                currentUser = &user;
                return true;
            }
        }
    }
    std::cout << "������������ ������ �����." << std::endl;
    return false;
}

void Chat::logout()
{
    if (currentUser) {
        currentUser->getUserName();
        currentUser = nullptr;
    }

}
