#include <iostream>
using namespace std;


void Sum(int num1, int num2) {
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
}


void Minus(int num1, int num2) {
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
}






int main() {
    int num1 = 0, num2 = 0;
    cout << "Enter number1: ";
    cin >> num1;
    cout << "Enter number2: ";
    cin >> num2;
    Sum(num1, num2);
    Minus(num1, num2);
}

