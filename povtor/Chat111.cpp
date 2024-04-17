/*
#include "Chat111.h"
#include <iostream>

User::User(std::string password, std::string userName, int newUserID) :password(password), userName(userName), newUserID(newUserID) {}


std::string User::getPassword() 
{
	return password;
}

std::string User::getUserName() 
{
	return userName;
}

int User::getNewUserID()
{
	return newUserID;
}

bool Chatss::registerUser(std::string userName, std::string password)
{
    for (auto& users : userDatabase)
        for ( User& user : users)
            if (user.getUserName() == userName) {
                std::cout << "��� ������������ ��� ���������� " << userName << std::endl;
                return false;
            }
    int newUserID = userDatabase.size() + 1;
    userDatabase.push_back({ User(password, userName, newUserID) });
    std::cout << "������������ ���������������: id " << newUserID << std::endl;
    return true;
}

bool Chatss::login(std::string userName, std::string password, int newUserID)
{
    for (auto& users : userDatabase)
        for (User& user : users)
            if (user.getUserName() == userName && user.getPassword() == password) {
                std::cout << "���� ��������: " << userName << " " << "id: " << user.getNewUserID() << std::endl;
                currentUser = &user;
                return true;
            }
    std::cout << "������������ ������ �����." << std::endl;
    return false;
}

void Chatss::logout()
{
    if (currentUser) {
        currentUser->getUserName();
        currentUser = nullptr;
    }
}

void Chatss::showAllUsers()
{
    std::cout << "��������� ����:" << std::endl;

    for (auto& users : userDatabase)
        for (User& user : users)
            std::cout << user.getUserName() << " (id: " << user.getNewUserID() << ")" << std::endl;
}

void Chatss::sendMessageUser( std::string senderName)
{
    showAllUsers();

    int recipientID;
    std::cout << "������� ID ����������: ";
    std::cin >> recipientID;

    std::string messageText;
    std::cout << "������� ����� ���������: ";
    std::cin.ignore();
    std::getline(std::cin, messageText);
    User* recipient = nullptr;

    // ������� ���������� � �������� ID
    for (auto& users : userDatabase)
        for (User& user : users)
            if (user.getNewUserID() == recipientID) {
                recipient = &user;
                break;
            }
    if (recipient) {
        Message newMessage = { senderName, recipientID, messageText };
        messageHistory.push_back(newMessage);
        std::cout << "��������� ���������� ������������ " << recipient->getUserName() << ": " << messageText << std::endl;
    }
    else
        std::cout << "������������ � ��������� ID �� ������." << std::endl;
}

void Chatss::checkMessage()
{
    for (Message& message : messageHistory)
        std::cout << "����� ��������� �� " << message.sender << ": " << message.text << std::endl;
}
*/
