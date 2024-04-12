#include "chat_class.h"
#include <iostream>
#include <vector>
#include "Users.h"

#pragma warning(disable:4996)

using namespace std;

string hill = "n";
string _login, _pass;
int set;
int _idUser = 1;

int main()
{
    // warning
    cout << "hi" << endl;
    cout << "hi" << endl;

    Chat* Chat1 = new Chat; // da budet chat

    delete Chat1;

    return 0;
}

/*int main()
{
    setlocale(LC_ALL, "Russian");
    Chat chat;
    User user;
    int choice;
    int choice1{};

    do {
        std::cout << "Выберите действие:" << std::endl;
        std::cout << "1. Регистрация нового пользователя" << std::endl;
        std::cout << "2. Вход в аккаунт" << std::endl;
        std::cout << "0. Выйти из программы" << std::endl;

        std::cout << "Введите номер выбранного действия: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
        case 1: {
            std::string username, password;
            std::cout << "Введите имя пользователя: ";
            std::cin >> username;
            std::cout << "Введите пароль: ";
            std::cin >> password;
            chat.registerUser(username, password);
            break;
        }
        case 2: {
            std::string userName, password;
            std::cout << "Введите имя пользователя: ";
            std::cin >> userName;
            std::cout << "Введите пароль: ";
            std::cin >> password;
            bool loginSuccess = chat.login(userName, password, newUserID);
            if (loginSuccess) {
                std::cout << "Вход в аккаунт прошел успешно." << std::endl;

                do {
                    std::cout << "Выберите действие" << std::endl;
                    std::cout << "1. Отправить сообщение всем" << std::endl;
                    std::cout << "2. Отправить сообщение конкретному пользователю" << std::endl;
                    std::cout << "3. Выйти из аккаунта" << std::endl;
                    std::cin >> choice1;

                    switch (choice1) {
                    case 1: {
                        std::string text;
                        std::cout << "Введите сообщение" << std::endl;
                        std::cin.ignore();
                        std::getline(std::cin, text);
                        //chat.addMessageToAll(text, userName);
                        break;
                    }
                    case 2: {
                        std::string recipient, text;
                        std::cout << "Введите имя получателя: ";
                        std::cin >> recipient;
                        std::cin.ignore();
                        std::cout << "Введите сообщение: ";
                        std::getline(std::cin, text);
                        // chat.addMessageToUser(text, userName, recipient);
                        break;
                    }
                    case 3: {
                        chat.logout();
                        std::cout << "Выход из аккаунта" << std::endl;
                        break;
                    }
                    default:
                        std::cout << "Неверный выбор. Попробуйте снова." << std::endl;
                        break;
                    }
                } while (choice1 != 3);
            }
            break;
        }
        case 3: {
            chat.logout();
            std::cout << "Выход из аккаунта" << std::endl;
            break;
        }
        case 0: {
            std::cout << "Выход из программы." << std::endl;
            break;
        }
        default:
            std::cout << "Неверный выбор. Попробуйте снова." << std::endl;
            break;
        }
    } while (choice != 0);

    return 0;
}*/