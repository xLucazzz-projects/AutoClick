#include <iostream>
#include <Windows.h>

using namespace std;

struct variables{
	int key = VK_XBUTTON2;
}val;

void setcolor(unsigned short color)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, color);
}


int main()
{
	SetConsoleTitle("[AUTOCLICK] | by xLucazzz");
	Sleep(2000);
	cout << "[+] Drivers Loaded" << endl;
	setcolor(1);
	Sleep(1000);
	MessageBox(NULL, "Autoclick Loaded", "[AUTOCLICK] | by xLucazzz", 0);

	system("cls");

	cout << " _____ _____ _____ _____ _____ __    _____ _____ _____" << endl;
	cout << "|  _  |  |  |_   _|     |     |  |  |     |     |  |  |" << endl;
	cout << "|     |  |  | | | |  |  |   --|  |__|-   -|   --|    -|" << endl;
	cout << "|__|__|_____| |_| |_____|_____|_____|_____|_____|__|__|\n" << endl;

	cout << "F4 - EXIT" << endl;
	cout << "F5 - HIDE MENU" << endl;
	cout << "F6 - SHOW MENU" << endl;
	while (true)
	{
		Sleep(1);
		if (GetAsyncKeyState(val.key)) {
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			Sleep(27);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(rand() % 49);
		}

		if (GetAsyncKeyState(VK_F4)) {
			MessageBox(NULL, "Autoclick Unloaded", "[AUTOCLICK] | by xLucazzz", 0);
			Sleep(2000);
			exit(0);
		}

		if (GetAsyncKeyState(VK_F5)) {
			ShowWindow(GetConsoleWindow(), SW_HIDE);
		}

		if (GetAsyncKeyState(VK_F6)) {
			ShowWindow(GetConsoleWindow(), SW_SHOW);
		}

	}
}
