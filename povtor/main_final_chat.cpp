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
        std::cout << "�������� ��������:" << std::endl;
        std::cout << "1. ����������� ������ ������������" << std::endl;
        std::cout << "2. ���� � �������" << std::endl;
        std::cout << "0. ����� �� ���������" << std::endl;

        std::cout << "������� ����� ���������� ��������: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
        case 1: {
            // std::string username, password;
            // std::cout << "������� ��� ������������: ";
            // std::cin >> username;
             //std::cout << "������� ������: ";
             //std::cin >> password;
            chat.dataUser();
            break;
        }
        case 2: {
            std::string login, password;
            std::cout << "������� �����: ";
            std::cin >> login;
            std::cout << "������� ������: ";
            std::cin >> password;
            bool loginSuccess = chat.login(login, password);
            if (loginSuccess) {
                std::cout << "���� � ������� ������ �������." << std::endl;

                do {
                    std::cout << "�������� ��������" << std::endl;
                    std::cout << "1. ��������� ��������� ����" << std::endl;
                    std::cout << "2. ��������� ��������� ����������� ������������" << std::endl;
                    std::cout << "3. ����� �� ��������" << std::endl;
                    std::cout << "4. �������� ���������� ��������� " << std::endl;
                    std::cin >> choice1;

                    switch (choice1) {
                    case 1: {
                        //std::string text;
                       // std::cout << "������� ���������" << std::endl;
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
                        std::cout << "����� �� ��������" << std::endl;
                        break;
                    }
                    case 4: {
                        //chat.checkMessage();
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


}
