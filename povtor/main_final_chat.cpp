#include "Chat111.h"
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int main() {
#pragma region settings chat
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
#pragma endregion
	NewChat chat;
	chat.Prog();

	return 0;
}