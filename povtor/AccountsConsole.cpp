#include "AccountsConsole.h"
#include "Chat111.h"
#include <iostream>
#include <string>

/*
#include "AccountsConsole.h"
#include <iostream>
#include <vector>

Users::Users(const string& name) : name(name) { }
string Users::getName() const { return name; }
Enterface::Enterface(const string& currentUser) : currentUser(currentUser) { }

void Enterface::checkUsers(Users* users, int size) const {
	cout << "���� ������ ��������?" << endl;
	for (int i = 0; i < size; i++)
		if (users[i].getName() != currentUser)
			cout << users[i].getName() << endl;
}
void Enterface::SendingMessage(string senderName) {

	string enterUser;
	cout << "������� ��� ����������: ";
	cin >> enterUser;

	string textMessage;
	cout << "����� ���������: ";
	getline(cin, textMessage);
	User* rect = nullptr;

	for(auto& acc : Users[length])
		for(User& user : acc)
			if (user.getUserName() == enterUser) {
				rect = &user;
				break;
			}
	if (rect) {
		//����� �������� ��� ���������
	}
}
void Enterface::CheckedMessage() {
	//�������� �� ����� ���������
}
*/

//Messangers::Messangers() { }
//
//void Messangers::WhosMessage(int count) {
//	cout << "���� ������ ��������� ���������?" << "\n������� ��� �������� ��� ������ �������� ���������" << endl;
//	cin >> nameUser;
//	for (int i = 0; i < count; i++) {
//		if (usersArray[i].getName() == nameUser) {
//			cout << "��������� ��������: " << endl;
//		}
//		else {
//			cout << "������� �������� ���!\n���������� ����� �������." << endl << endl;
//		}
//	}
//}
//
//void Messangers::SendMessage() {
//
//}
//
//Messangers::~Messangers() {
//	//delete[] Messages;
//}