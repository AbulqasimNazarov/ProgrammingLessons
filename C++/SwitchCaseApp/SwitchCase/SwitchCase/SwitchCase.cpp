#include <iostream>
using namespace std;

int main()
{
    /*int number = 0;
    cout << "Enter number: ";
    cin >> number;
    if (number == 1)
    {
        cout << number + 5 << endl;
    }
    else if (number == 2)
        cout << number * 5 << endl;
    else if(number == 3)
        cout << number - 5 << endl;
    else if (number == 4)
        cout << (double(number) / 5) << endl;
    else
        cout << number * 1 << endl;*/


    int number = 0;
    cout << "Enter number: ";
    cin >> number;

    switch (number)
    {
    case 1: {
        cout << number + 5 << endl;
        break;

    }    
    case 2:
        cout << number * 5 << endl;
        break;
    case 3:
        cout << number - 5 << endl;
        break;
    case 4:
        cout << number / 5 << endl;
        break;
    default:
        cout << "Number is incorrect" << endl;
        break;
    
    }



}

