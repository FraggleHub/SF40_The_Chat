#include "AccountsConsole.h"
#include "Chat111.h"
#include <iostream>
#include <string>

using namespace std;

void Messangers::WhosMessage(int count, int in) {
	cout << "Кому хотите отправить сообщение?" << "\nВведите имя человека для начала отправки сообщения" << endl;
	cin >> nameUser;
	for (int i = 0; i < count; i++) {
		if (usersArray[i].getName() == nameUser) {
			int	out = usersArray[i].getId();
			someMessage(in, out);
		}
		else 
			cout << "Данного человека нет!\nПопробуйте найти другого." << endl << endl;
	}
}

Messangers::~Messangers() {
	//delete[] Messages;
}

someMessage::someMessage(int in, int out) : _in(in), _out(out) {

}

void someMessage::allMessage(int all) {

}
