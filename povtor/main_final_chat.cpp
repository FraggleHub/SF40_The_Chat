#include "Chat111.h"
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
/*#include <iostream>

using namespace std;

void Registration()
{
    cout << "\n Let's do registration" << endl;
    //....
};

void Main_Menu()
{
    short choice;
    cout << "\t\t This is Chat!!" << endl;
    cout << "1. Registration" << endl;
    cout << "input choice";

    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        cout << "\n\t your choice: Registration "<< endl;
        Registration();
        break;
    }

    case 2:
    {
        //....
        break;
    }
    }
};

int main()
{
	cout << "startup" <<endl << endl;

    Main_Menu();

	return 0;
}
*/


int main() {
#pragma region settings chat
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    int choice;
    int choice1;
    NewChat chat;
    string login, password, name;
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
            // std::string username, password;
            // std::cout << "Введите имя пользователя: ";
            // std::cin >> username;
             //std::cout << "Введите пароль: ";
             //std::cin >> password;
            chat.dataUser();
            break;
        }
        case 2: {
            std::string login, password;
            std::cout << "Введите логин: ";
            std::cin >> login;
            std::cout << "Введите пароль: ";
            std::cin >> password;
            bool loginSuccess = chat.login(login, password);
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

                        chat.showAllUsers();
                       // chat.sendMessageUser();

                        break;
                    }
                    case 3: {
                        // chat.logout();
                        std::cout << "Выход из аккаунта" << std::endl;
                        break;
                    }
                    case 4: {
                        //chat.checkMessage();
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
