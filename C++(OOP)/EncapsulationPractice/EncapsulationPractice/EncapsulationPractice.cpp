#include <iostream>
#include <string>
using namespace std;
#include "Book.h"
#include "Employee.h"
#include "BankAccount.h"
int main()
{

    BankAccount account = BankAccount("Abulqasim", "7D3GH478C");
    cout << account.GetBalance() << endl;
    account.Deposit(40);
    cout << account.GetBalance() << endl;
    cout << endl;
    account.PrintAccountInfo();



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
