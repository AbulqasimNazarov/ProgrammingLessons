

#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <conio.h>
#include <ctime>
using namespace std;





int main()
{
    string arr[4]{ "Plus", "Minus", "Divide", "Multiple" };
    int selected = 0;

    while (true)
    {
        system("cls");
        for (int i = 0; i < 4; i++)
        {
            if (selected == i)
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
        case 119: {
            if (selected == 0)
            {
                selected = 3;
            }
            else {
                selected--;

            }
            break;
        }
        case 115: {
            if (selected == 3)
            {
                selected = 0;
            }
            else {
                selected++;

            }
            break;
        }
        default:
            break;
        }
    }













    //srand(time(0));
    //int arr1[5]{};
    ////string arr2[5]{ "Hello", "World", "5", "23", "12" };


    //int arr3[3][5]{
    //    {1, 1, 1, 1, 1},
    //    {1, 1, 1, 1, 1},
    //    {1, 1, 1, 1, 1},
    //};

    //for (int i = 0; i < 3; i++)
    //{
    //    for (int j = 0; j < 5; j++)
    //    {
    //        arr3[i][j] = rand() % (50 - 25) + 25;
    //    }
    //}

    //
    //for (int i = 0; i < 3; i++)
    //{
    //    for (int j = 0; j < 5; j++)
    //    {
    //        cout << arr3[i][j] << " ";
    //    }
    //    cout << endl;
    //}







    /*arr3[1][2] = 0;*/

    




    //int i = 0;

    //while (i < 5)
    //{
    //    arr1[i] = rand() % 10;
    //    cout << arr1[i] << endl;
    //    i++;
    //}







    /*srand(time(0));
    int arr[3][5]{};
    int random = rand() % 10;
    int i = 0;
    int j = 0;
    while (i < 3)
    {
        while (j < 5)
        {
            cout<<
        }
    }*/
}

