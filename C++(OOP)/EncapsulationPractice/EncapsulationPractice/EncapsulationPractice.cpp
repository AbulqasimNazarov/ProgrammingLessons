#include <iostream>
#include <string>
#include <Windows.h>;
#include <conio.h>
using namespace std;
#include "Book.h"
#include "Employee.h"
#include "BankAccount.h"
#include "StudentGroup.h"

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

enum  Keyboard : int {
    w = 119,
    s = 115,
    enter = 13,
    
};

int main()
{
    int studentCount = 0;
    const int arrLength = 5;
    string MenuArrr[arrLength]{ "Add Student", "Add Grade", "Average Result", "Student info", "All Students List"};
    int selected = 0;
    string NameStudentList[10]{};
    while (true)
    {
        system("cls");
        for (int i = 0; i < arrLength; i++)
        {
            if (selected == i) {
                SetConsoleTextAttribute(console, 0x70);
                cout << MenuArrr[i] << endl;
                SetConsoleTextAttribute(console, 0x07);
            }
            else {
                cout << MenuArrr[i] << endl;
            }
        }
        int key = _getch();
        switch (key)
        {
        case Keyboard::s: {
            if (selected == arrLength-1) {
                selected = 0;
            }
            else {
                selected++;
            }
            break;
        
        }
        case Keyboard::w: {
            if (selected == 0) {
                selected = arrLength - 1;
            }
            else {
                selected--;
            }
            break;
        }
        case Keyboard::enter: {
            if (selected == 0)
            {
                system("cls");
                string nameStudent;
                int ageStudent;
                cout << "Name: ";
                cin >> nameStudent;
                cout << "Age: ";
                cin >> ageStudent;

                if (studentCount < 10) {
                    NameStudentList[studentCount++] = nameStudent;
                }
                else {
                    cout << "Student list is full!" << endl;
                    
                }
                
            }
            else if (selected == (arrLength - 1)) {
                system("cls");
                for (int i = 0; i < 10; i++)
                {
                    cout << NameStudentList[i] << endl;
                }
                cout << endl;
                _getch();
            }
            break;
        }

        default:
            break;
        }

    }
    








    /*BankAccount account = BankAccount("Abulqasim", "7D3GH478C");
    cout << account.GetBalance() << endl;
    account.Deposit(40);
    cout << account.GetBalance() << endl;
    cout << endl;
    account.PrintAccountInfo();*/

    /*Book bookinfo = Book("Adventure of lifetime");
    bookinfo.printInfo();
    bookinfo.printInfo(true);*/
    /*Employee staff1 = Employee();
    cout << staff1.name;
    cout << " " << staff1.salary << "$";
    cout << endl;
    Employee staff2 = Employee("Ilhama");
    cout << staff2.name;
    cout << " " << staff2.salary<< "$";
    cout << endl;
    Employee staff3 = Employee("Sabina", 0);
    cout << staff3.name;
    cout << " " << staff3.salary << "$";*/

}
