#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;


string* arr1 = new string[4]{
        "Student List",
        "Add Student",
        "Delete Student",
        "End Application"

};

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

enum  Keyboard : int {
    w = 119,
    s = 115,
    enter = 13,
    n = 20,
};
void DrawMenu(string* arr1, int selected) {
    
    for (int i = 0; i < 4; i++)
    {
        if (i == selected)
        {
            SetConsoleTextAttribute(console, 0x70);
            cout << arr1[i] << endl;
            SetConsoleTextAttribute(console, 0x07);
        }   
        else {
            cout << arr1[i] << endl;
        }
         
    }
}
void KeyDirection(int key, int* selected) {
    switch (key)
    {
    case Keyboard::w:
    {

        if (*selected == 0) {
            *selected = 3;
        }
        else {
            *selected = *selected - 1;
        }
        break;
    }
    case Keyboard::s: {
        if (*selected == 3) {
            *selected = 0;
        }
        else {
            *selected = *selected + 1;
        }
        break;
    }
    default:
        break;
    }

}

int main()
{

    int selected = 0;
    int* StudentArr = new int[Keyboard::n] {};
    
    while (true)
    {
        system("cls");
        DrawMenu(arr1, selected);
        int key = _getch();
        KeyDirection(key, &selected);
       
    }
    
    delete[] arr1;




    /*const int num = 10;
    int arr1[num]{};

    int* arr2 = new int[num] {};

    for (int i = 0; i < 10; i++)
    {
        cout << arr2[i] << endl;
    }
    delete arr2;*/



    /*int number = 90;
    int* num1 = new int(80);
    int* num2 = &number;
    *num1 = 76;
    cout << num1 << endl;
    num1 = nullptr;
    num2 = nullptr;
    
    delete num2;
    delete num1;

    cout << num1 << endl;
    cout << num2 << endl;*/
}