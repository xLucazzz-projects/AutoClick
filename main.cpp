#include <iostream>
#include <Windows.h>

using namespace std;
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
	cout << "Closing this windows in 10 seconds..." << endl;
	Sleep(10000);
	ShowWindow(GetConsoleWindow(), SW_HIDE);
	while (true)
	{
		Sleep(1);
		if (GetAsyncKeyState(VK_XBUTTON2)) {
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			Sleep(25);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(rand() % 39);
		}

		if (GetAsyncKeyState(VK_F4)) {
			exit(0);
		}
	}
}
