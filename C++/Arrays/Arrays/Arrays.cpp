#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

int main()
{
    /*int num1 = 10;
    int num2 = num1;
    cout << num2 << endl;*/
    
    /*int arr[]{45, 9, 7, 67};
    arr[3] = 4;

    int i = 0;
    while (i < 4) {
        cout << arr[i] << endl;
        i++;

    }*/
    
    
    

    /*for (int i = 0; i < 4; i++)
    {
        cout<< arr[i] <<endl;
    }*/

    /*int num = 12;

    int arr[]{ num, 17, 22, 34, 56, 78 };

    for (int i = 5; i >= 0; i--) {
        cout << arr[i] << endl;
    }*/

    string arr[]{ "first", "second" };
    int selectedIndex = 0;

    while (true) {
        for (int i = 0; i < 2; i++)
        {
            system("cls");
            if (i == selectedIndex)
            {
               
                cout << "> " << arr[i] << endl;
               
            }
            else {
                cout << arr[i] << endl;
            }
        }
        int key = _getch();
        switch (key)
        {
        case 72:
            selectedIndex--;
            break;
        case 80:
            selectedIndex++;
        default:
            break;
        }
    }
    
}
