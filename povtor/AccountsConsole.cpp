#include "AccountsConsole.h"
#include "Chat111.h"
#include <iostream>
#include <string>

using namespace std;

void Messangers::WhosMessage(int count, int in) {
	cout << "���� ������ ��������� ���������?" << "\n������� ��� �������� ��� ������ �������� ���������" << endl;
	cin >> nameUser;
	for (int i = 0; i < count; i++) {
		if (usersArray[i].getName() == nameUser) {
			int	out = usersArray[i].getId();
			someMessage(in, out);
		}
		else 
			cout << "������� �������� ���!\n���������� ����� �������." << endl << endl;
	}
}

Messangers::~Messangers() {
	//delete[] Messages;
}

someMessage::someMessage(int in, int out) : _in(in), _out(out) {

}

void someMessage::allMessage(int all) {

}
