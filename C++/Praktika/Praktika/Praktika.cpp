#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int arr[4][3]{
		 {1,2,5},
		 {3,4,6},
		 {7,8,9},
		 {12,24,45}
	};
	int* start = arr[0];

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cout << *(start + (y * 3) + x) << "\t";
		}
		cout << endl;
	}







	/*srand(time(0));
	int x = rand()%11;
	int y = rand() % 11;

	int a = rand() % 11;
	int b = rand() % 11;

	int arr[11][11]{

	};

	arr[x][y] = 219;
	arr[a][b] = 167;
	
	while (true)
	{
		
		

		
		
		system("cls");
		
		for (int i = 0; i < 11; i++)
		{
			for (int j = 0; j < 11; j++)
			{
				cout << char(arr[i][j]) << " ";
			}
			cout << endl;
		}
		int key = _getch();
		switch (key)
		{
		case 119: {
			if (x < 0)
			{
				x = 10;
				
			}
			else {

				arr[x][y] = 0;
				arr[--x][y] = 219;
				break;

			}
		case 115: {
			if (x > 10)
			{
				x = -1;

			}
			else {

				arr[x][y] = 0;
				arr[++x][y] = 219;
				break;

			}
			break;

		}
		}
			
		}
	}
	
	*/










    
	//user vvodit chisla poka ne vvedet 0. a vvedenniye chisla nujno summirovat
	/*int num = 0;
	int result = 0;
	cout << "enter number: ", cin >> num;
	bool cap = true;

	while (cap)
	{
		if (num == 0)
		{
			cap = false;
		}
		else {
			result += num;
			cout << "enter number: ", cin >> num;

		}
	}


	cout << result << endl;*/
}

