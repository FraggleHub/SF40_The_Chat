/*
#include "chat_class.h"
#include <iostream>
#include <vector>
#include "Chat111.h"
#include <Windows.h>
#include "AccountsConsole.h"

using namespace std;

int main() {
#pragma region settings chat
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#pragma endregion
    User user;
    Chatss chats;
    Enterface etc;
    int choice, choice1, newUserId{};

    string senderName;
    do {
        cout << "Выберите действие: " << endl;
        cout << "1 - Регистрация нового пользователя" << endl;
        cout << "2 - Вход в аккаунт" << endl;
        cout << "0 - Выйти из программы" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1: {
            string username, password;
            cout << "Введите имя пользователя: ";
            cin >> username;
            cout << "Введите пароль: ";
            cin >> password;
            chats.registerUser(username, password);
            break;
        }
        case 2: {
            string userName, password;
            cout << "Введите имя пользователя: ";
            cin >> userName;
            cout << "\nВведите пароль: ";
            cin >> password;
            bool loginSuccess = chats.login(userName, password, newUserId);
            if (loginSuccess) {
                cout << "Вход выполнен." << endl << endl;
                do {
                    cout << "Выберите действие: " << endl;
                    cout << "1 - Отправить сообщение всем." << endl;
                    cout << "2 - Отправить сообщение одному пользователю." << endl;
                    cout << "3 - Посмотреть полученные сообщения." << endl;
                    cout << "0 - Выйти из аккаунта." << endl;
                    cin >> choice1;
                    switch (choice1)
                    {
                    case 1: {
                        break;
                    }
                    case 2: {
                        string senderName;
                        cout << "Введите своё имя: ";
                        cin >> senderName;
                        etc.SendingMessage(senderName);
                        break;
                    }
                    case 3: {
                        etc.CheckedMessage();
                        break;
                    }
                    case 0: {
                        chats.logout();
                        break;
                    }
                    default:
                        cout << "Под этим номером нет действий" << endl << endl;
                        break;
                    }
                } while (choice1 != 0);
            }
        }
        default:
            break;
        }
    } while (choice != 0);

    return 0;
}
*/