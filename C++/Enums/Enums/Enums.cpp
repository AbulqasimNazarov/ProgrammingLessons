
#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;




HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

enum Keybord : int {
	w = 119,
	s = 115,
	nol = 0,
	enter = 13,
	

};




int main()
{

	/*cout << Keybord::w << endl;*/

	/*int num1, num2;
	cout << "Enter num1", cin >> num1 >> num2;*/

	const int length = 3;
	string arr[length]{ "start", "Settings", "Exit" };
	string arr2[length]{ "Volume", "Airdrop", "Exit" };
	int selected = 0;
	
	
	

	while (true)
	{
		system("cls");
		for (int i = 0; i < length; i++)
		{
			if (selected == i)
			{
				SetConsoleTextAttribute(console, 0x70);
				cout << arr[i] << endl;
				SetConsoleTextAttribute(console, 0x07);
			}
			else {
				cout << arr[i] << endl;
			}
		}
		int key = _getch();
		switch (key)
		{
		case Keybord::w: {
			if (selected == Keybord::nol)
			{
				selected = length - 1;
			}
			else {
				selected--;

			}
			break;
		}
		case Keybord::s: {
			if (selected == (length - 1))
			{
				selected = nol;
			}
			else {
				selected++;

			}
			break;
		}
		case Keybord::enter: {

			if (selected == (length - 2)) {
				while (true) {
					system("cls");
					for (int j = 0; j < length; j++)
					{
						if (selected == j) {
							SetConsoleTextAttribute(console, 0x70);
							cout << arr2[j] << endl;
							SetConsoleTextAttribute(console, 0x07);
						}
						else {
							cout << arr2[j] << endl;
						}
					}
					_getch();
				}
			}
			break;

		}
		default:
			break;
		}
	}

}