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
                std::cout << "Имя пользователя уже существует " << userName << std::endl;
                return false;
            }
    int newUserID = userDatabase.size() + 1;
    userDatabase.push_back({ User(password, userName, newUserID) });
    std::cout << "Пользователь зарегистрирован: id " << newUserID << std::endl;
    return true;
}

bool Chatss::login(std::string userName, std::string password, int newUserID)
{
    for (auto& users : userDatabase)
        for (User& user : users)
            if (user.getUserName() == userName && user.getPassword() == password) {
                std::cout << "Вход выполнен: " << userName << " " << "id: " << user.getNewUserID() << std::endl;
                currentUser = &user;
                return true;
            }
    std::cout << "Неправильные данные входа." << std::endl;
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
    std::cout << "Участники чата:" << std::endl;

    for (auto& users : userDatabase)
        for (User& user : users)
            std::cout << user.getUserName() << " (id: " << user.getNewUserID() << ")" << std::endl;
}

void Chatss::sendMessageUser( std::string senderName)
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
    for (auto& users : userDatabase)
        for (User& user : users)
            if (user.getNewUserID() == recipientID) {
                recipient = &user;
                break;
            }
    if (recipient) {
        Message newMessage = { senderName, recipientID, messageText };
        messageHistory.push_back(newMessage);
        std::cout << "Сообщение отправлено пользователю " << recipient->getUserName() << ": " << messageText << std::endl;
    }
    else
        std::cout << "Пользователь с указанным ID не найден." << std::endl;
}

void Chatss::checkMessage()
{
    for (Message& message : messageHistory)
        std::cout << "Новое сообщение от " << message.sender << ": " << message.text << std::endl;
}
*/
#include "Chat111.h"
#include <iostream>
#include "AccountsConsole.h"

using namespace std;

Messangers mess;

int NewChat::UserId = 0;
Users::Users(int id, string login, string password, string name) :id(id), login(login), password(password), name(name) {}

Users::~Users() { }

string Users::getLogin() {
    return login;
}

string Users::getPassword() {
    return password;
}

string Users::getName() {
    return name;
}

int Users::getId() {
    return id;
}

NewChat::NewChat() {
    usersArray = nullptr;
    usersCount = 0;
}

NewChat::~NewChat()
{
    if (usersArray != nullptr) {
        delete[] usersArray;
    }

}

bool NewChat::registerUser(string login, string password, string name)
{
    for (int i = 0; i < usersCount; ++i) {
        if (usersArray[i].getLogin() == login) {
            cout << "Логин \"" << login << "\" уже занят. Выберите другой логин." << endl;
            return false;
        }
    }
    int newId = UserId + 1;
    Users newUser(newId, login, password, name);
    Users* temp = new Users[usersCount + 1];
    for (int i = 0; i < usersCount; ++i) {
        temp[i] = usersArray[i];
    }
    temp[usersCount] = newUser;
    delete[] usersArray;
    usersArray = temp;
    UserId = newId;
    ++usersCount;
    cout << "Регистрация пользователя \"" << name << "\" успешно завершена." << endl;
    return true;
}

bool NewChat::Entered(string login, string password)
{
    for (int i = 0; i < usersCount; ++i) {
        if (usersArray[i].getLogin() == login && usersArray[i].getPassword() == password) {
            cout << "Вход выполнен успешно. Добро пожаловать, " << usersArray[i].getName() << "!" << endl;
            cout << "Ваш уникальный ID: " << usersArray[i].getId() << endl;
            showAllUsers();
            mess.WhosMessage(usersCount, usersArray[i].getId());
            return true;
        }
    }

    cout << "Неверный логин или пароль. Попробуйте снова." << endl;
    return false;
}

void NewChat::dataUser()
{
    string login;
    string password;
    string name;

    cout << "Введите логин: "; // Переделать через гетлайн 
    cin >> login;
    cout << "Введите пароль: ";
    cin >> password;
    cout << "Введите полное имя: ";
    cin.ignore(); // Очистка буфера ввода
    getline(std::cin, name);
    registerUser(login, password, name);
}

void NewChat::showAllUsers()
{
    cout << "Список зарегистрированных пользователей:" << endl;
    for (int i = 0; i < usersCount; ++i) {
        cout << "ID: " << usersArray[i].getId() << " | Имя: " << usersArray[i].getName() << endl;
    }
}

void NewChat::Prog()
{
    bool  isLoggedIn = true;
    int choice;

    while (true) {
        if (isLoggedIn) {
            std::cout << "Добро пожаловать в чат!" << std::endl;
            isLoggedIn = false;
        }

        std::cout << "Выберите действие:" << std::endl;
        std::cout << "1. Регистрация нового пользователя" << std::endl;
        std::cout << "2. Вход в аккаунт" << std::endl;
        std::cout << "3. Список участников" << std::endl;
        std::cout << "0. Выйти из программы" << std::endl;

        std::cout << "Введите номер выбранного действия: ";
        std::cin >> choice;

        switch (choice) {
        case 1: {
            dataUser();
            break;
        }
        case 2: {
            std::string login, password;
            std::cout << "Введите логин: ";
            std::cin >> login;
            std::cout << "Введите пароль: ";
            std::cin >> password;
            Entered(login, password);
            break;
        }
        case 3: {
            showAllUsers();
            break;
        }
        case 0:
            std::cout << "Выход из программы." << std::endl;
            return;
        default:
            std::cout << "Некорректный выбор." << std::endl;
            break;
        }
    }
}