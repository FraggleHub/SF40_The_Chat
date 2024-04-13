//#include "chat_class.h"
#include <iostream>
#include <vector>
//#include "Users.h"
#include "Chat111.h"
#pragma warning(disable:4996)

using namespace std;

//string hill = "n";
//string _login, _pass;
//int set;
//int _idUser = 1;

//int main()
//{
    // warning
   // cout << "hi" << endl;
    //cout << "hi" << endl;

   // Chat* Chat1 = new Chat; // da budet chat

   // delete Chat1;

   // return 0;
//}

int main()
{
    setlocale(LC_ALL, "Russian");
    Chatss chatss;
    User user;
    int choice;
    int choice1;
    int newUserID{};
    std::string senderName;
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
            chatss.registerUser(username, password);
            break;
        }
        case 2: {
            std::string userName, password;
            std::cout << "Введите имя пользователя: ";
            std::cin >> userName;
            std::cout << "Введите пароль: ";
            std::cin >> password;
            bool loginSuccess = chatss.login(userName, password, newUserID);
            if (loginSuccess) {
                std::cout << "Вход в аккаунт прошел успешно." << std::endl;
               
                do {
                    std::cout << "Выберите действие" << std::endl;
                    std::cout << "1. Отправить сообщение всем" << std::endl;
                    std::cout << "2. Отправить сообщение конкретному пользователю" << std::endl;
                    std::cout << "3. Выйти из аккаунта" << std::endl;
                    std::cout << "4. Просмотр полученных сообщений " << std::endl;
                    std::cin >> choice1;

                    switch (choice1) {
                    case 1: {
                        //std::string text;
                       // std::cout << "Введите сообщение" << std::endl;
                       // std::cin.ignore();
                       // std::getline(std::cin, text);
                       // chat.addMessage(senderName);
                        break;
                    }
                    case 2: {
                        std::string senderName;
                        std::cout << "Введите свое имя: ";
                        std::cin >> senderName;
                        chatss.sendMessageUser(senderName);
                    
                        break;
                    }
                    case 3: {
                        chatss.logout();
                        std::cout << "Выход из аккаунта" << std::endl;
                        break;
                    }
                    case 4: {
                        chatss.checkMessage();
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
}