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
        cout << "�������� ��������: " << endl;
        cout << "1 - ����������� ������ ������������" << endl;
        cout << "2 - ���� � �������" << endl;
        cout << "0 - ����� �� ���������" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1: {
            string username, password;
            cout << "������� ��� ������������: ";
            cin >> username;
            cout << "������� ������: ";
            cin >> password;
            chats.registerUser(username, password);
            break;
        }
        case 2: {
            string userName, password;
            cout << "������� ��� ������������: ";
            cin >> userName;
            cout << "\n������� ������: ";
            cin >> password;
            bool loginSuccess = chats.login(userName, password, newUserId);
            if (loginSuccess) {
                cout << "���� ��������." << endl << endl;
                do {
                    cout << "�������� ��������: " << endl;
                    cout << "1 - ��������� ��������� ����." << endl;
                    cout << "2 - ��������� ��������� ������ ������������." << endl;
                    cout << "3 - ���������� ���������� ���������." << endl;
                    cout << "0 - ����� �� ��������." << endl;
                    cin >> choice1;
                    switch (choice1)
                    {
                    case 1: {
                        break;
                    }
                    case 2: {
                        string senderName;
                        cout << "������� ��� ���: ";
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
                        cout << "��� ���� ������� ��� ��������" << endl << endl;
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