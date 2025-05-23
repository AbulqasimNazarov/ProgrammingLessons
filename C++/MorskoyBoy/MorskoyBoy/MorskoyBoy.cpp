#include <iostream>
#include <cstdlib>
#include <time.h>
#include <Windows.h>
#include <conio.h>
using namespace std;

int main()
{
	int arr1[10][10]{

	};
	int arr2[10][10]{

	};
	arr1[2][1] = 1;
	arr1[2][2] = 1;
	arr1[2][3] = 1;
	arr1[3][8] = 1;
	arr1[4][3] = 1;
	arr1[5][3] = 1;
	
		for (int i = 1; i < 10; i++)
		{
			for (int j = 1; j < 10; j++) {
				cout << arr1[i][j] << " ";
				
			}
			cout << endl;
			for (int x = 1; x < 10; x++)
			{
				cout << arr2[i][x] << " ";
				
			}
			
				
		}
	
}

