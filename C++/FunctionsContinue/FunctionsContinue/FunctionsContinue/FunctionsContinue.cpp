#include <iostream>
using namespace std;


void Sum(int num1, int num2) {
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
}


void Minus(int num1, int num2) {
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
}






int main() {
    /*int num1 = 0, num2 = 0;
    cout << "Enter number1: ";
    cin >> num1;
    cout << "Enter number2: ";
    cin >> num2;
    Sum(num1, num2);
    Minus(num1, num2);*/



    int height = 0;
    cout << "Enter your triangle: ";
    cin >> height;
    for (int i = height; i > 0; i--)
    {
        for (int h = 0; h < i; h++) {
            cout << "* ";
        }
        cout << endl;
    }

}

