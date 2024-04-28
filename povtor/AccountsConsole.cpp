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
	cout << "Кому хотите написать?" << endl;
	for (int i = 0; i < size; i++)
		if (users[i].getName() != currentUser)
			cout << users[i].getName() << endl;
}
void Enterface::SendingMessage(string senderName) {

	string enterUser;
	cout << "Введите имя получателя: ";
	cin >> enterUser;

	string textMessage;
	cout << "Текст сообщения: ";
	getline(cin, textMessage);
	User* rect = nullptr;

	for(auto& acc : Users[length])
		for(User& user : acc)
			if (user.getUserName() == enterUser) {
				rect = &user;
				break;
			}
	if (rect) {
		//место перехода для сообщения
	}
}
void Enterface::CheckedMessage() {
	//проверка на новые сообщения
}
*/

//Messangers::Messangers() { }
//
//void Messangers::WhosMessage(int count) {
//	cout << "Кому хотите отправить сообщение?" << "\nВведите имя человека для начала отправки сообщения" << endl;
//	cin >> nameUser;
//	for (int i = 0; i < count; i++) {
//		if (usersArray[i].getName() == nameUser) {
//			cout << "Сообщение человеку: " << endl;
//		}
//		else {
//			cout << "Данного человека нет!\nПопробуйте найти другого." << endl << endl;
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