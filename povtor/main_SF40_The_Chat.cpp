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
        std::cout << "�������� ��������:" << std::endl;
        std::cout << "1. ����������� ������ ������������" << std::endl;
        std::cout << "2. ���� � �������" << std::endl;
        std::cout << "0. ����� �� ���������" << std::endl;

        std::cout << "������� ����� ���������� ��������: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
        case 1: {
            std::string username, password;
            std::cout << "������� ��� ������������: ";
            std::cin >> username;
            std::cout << "������� ������: ";
            std::cin >> password;
            chat.registerUser(username, password);
            break;
        }
        case 2: {
            std::string userName, password;
            std::cout << "������� ��� ������������: ";
            std::cin >> userName;
            std::cout << "������� ������: ";
            std::cin >> password;
            bool loginSuccess = chat.login(userName, password, newUserID);
            if (loginSuccess) {
                std::cout << "���� � ������� ������ �������." << std::endl;

                do {
                    std::cout << "�������� ��������" << std::endl;
                    std::cout << "1. ��������� ��������� ����" << std::endl;
                    std::cout << "2. ��������� ��������� ����������� ������������" << std::endl;
                    std::cout << "3. ����� �� ��������" << std::endl;
                    std::cin >> choice1;

                    switch (choice1) {
                    case 1: {
                        std::string text;
                        std::cout << "������� ���������" << std::endl;
                        std::cin.ignore();
                        std::getline(std::cin, text);
                        //chat.addMessageToAll(text, userName);
                        break;
                    }
                    case 2: {
                        std::string recipient, text;
                        std::cout << "������� ��� ����������: ";
                        std::cin >> recipient;
                        std::cin.ignore();
                        std::cout << "������� ���������: ";
                        std::getline(std::cin, text);
                        // chat.addMessageToUser(text, userName, recipient);
                        break;
                    }
                    case 3: {
                        chat.logout();
                        std::cout << "����� �� ��������" << std::endl;
                        break;
                    }
                    default:
                        std::cout << "�������� �����. ���������� �����." << std::endl;
                        break;
                    }
                } while (choice1 != 3);
            }
            break;
        }
        case 3: {
            chat.logout();
            std::cout << "����� �� ��������" << std::endl;
            break;
        }
        case 0: {
            std::cout << "����� �� ���������." << std::endl;
            break;
        }
        default:
            std::cout << "�������� �����. ���������� �����." << std::endl;
            break;
        }
    } while (choice != 0);

    return 0;
}*/