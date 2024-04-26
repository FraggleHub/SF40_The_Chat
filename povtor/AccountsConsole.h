#pragma once
#include <iostream>
#include <string>
#include "Chat111.h"

using namespace std;

class someMessage {
protected:
	int _in, _out; // �������� �� ���� - ����
	int _all; // �������������� ����� ������, ���� �������� ���� ������������� ���������
	string _text; // ��� ����� ���������
public:
	someMessage(int in, int out, string text);
	void allMessage(int all, string text);
	string getSomeone();

};

class Messangers {
protected:
	Users* usersArray;
	int userCount;
public:
	Messangers() = default;
	void WhosMessage(int count);
	void SendMessage();
	~Messangers();
};