#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;




int main()
{
	string arr[4]{ "Play", "Exit", "Settings"};
	int selected = 0;

	while (true)
	{
		system("cls");
		for (int i = 0; i < 3; i++)
		{
			if (i == selected)
			{
				cout <<"> "<< arr[i] << endl;

			}
			else {
				cout << arr[i] << endl;
			}
		}
		int key = _getch();
		switch (key)
		{
		case 72:
			selected--;
			break;
		case 80:
			selected++;
			break;
		default:
			break;
		}
		
	}
}

