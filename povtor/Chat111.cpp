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
                std::cout << "Имя пользователя уже существует " << userName << std::endl;
                return false;
            }
        }
    }
    int newUserID = userDatabase.size() + 1;
    userDatabase.push_back({ User(password, userName, newUserID) });
    std::cout << "Пользователь зарегистрирован: id " << newUserID << std::endl;
    return true;
}

bool Chat::login(std::string userName, std::string password, int newUserID)
{
    for (auto& users : userDatabase) {
        for (User& user : users) {
            if (user.getUserName() == userName && user.getPassword() == password) {
                std::cout << "Вход выполнен: " << userName << " " << "id: " << user.getNewUserID() << std::endl;
                currentUser = &user;
                return true;
            }
        }
    }
    std::cout << "Неправильные данные входа." << std::endl;
    return false;
}

void Chat::logout()
{
    if (currentUser) {
        currentUser->getUserName();
        currentUser = nullptr;
    }

}

void Chat::showAllUsers()
{
    std::cout << "Участники чата:" << std::endl;

    for (auto& users : userDatabase) {
        for (User& user : users) {
            std::cout << user.getUserName() << " (id: " << user.getNewUserID() << ")" << std::endl;
        }
    }
}

void Chat::sendMessageUser( std::string senderName)
{
    showAllUsers();

    int recipientID;
    std::cout << "Введите ID получателя: ";
    std::cin >> recipientID;

    std::string messageText;
    std::cout << "Введите текст сообщения: ";
    std::cin.ignore();
    std::getline(std::cin, messageText);
    User* recipient = nullptr;

    // Находим получателя с заданным ID
    for (auto& users : userDatabase) {
        for (User& user : users) {
            if (user.getNewUserID() == recipientID) {
                recipient = &user;
                break;
            }
        }

    }
    if (recipient) {
        Message newMessage = { senderName, recipientID, messageText };
        messageHistory.push_back(newMessage);
        std::cout << "Сообщение отправлено пользователю " << recipient->getUserName() << ": " << messageText << std::endl;
    }
    else {
        std::cout << "Пользователь с указанным ID не найден." << std::endl;
    }
}

void Chat::checkMessage()
{
    for (Message& message : messageHistory)
    {
        std::cout << "Новое сообщение от " << message.sender << ": " << message.text << std::endl;
    }
}
