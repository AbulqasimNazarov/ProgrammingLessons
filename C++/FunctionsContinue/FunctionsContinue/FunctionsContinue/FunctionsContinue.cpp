#include <iostream>
using namespace std;


int Sum() {

    int a, b, c, sum, numbers;
    cout << "Enter your first number: ", cin >> a;
    cout << "Enter your second number: ", cin >> b;
    cout << "Enter your third number: ", cin >> c;
    bool cap = (a > 0 && b > 0 && c > 0) ? true : false;
    if (cap == true)
    {
        sum = a + b + c;
        return sum;

    }
    else {
        cout << "Error" << endl;
    }

}


int Mult() {

    int a, b, c, mult;
    cout << "Enter your first number: ", cin >> a;
    cout << "Enter your second number: ", cin >> b;
    cout << "Enter your third number: ", cin >> c;
    bool cap = (a > 0 && b > 0 && c > 0) ? true : false;
    if (cap == true)
    {
        mult = a * b * c;
        return mult;

    }
    else {
        cout << "Error" << endl;;
    }

}
























int main() {


    int sum = Sum();
    int mult = Mult();

    cout << sum << ", " << mult << endl;


    /*int test = Sum1();
    cout << test << endl;*/
    //Sum();
    
    /*int height = 0;
    cout << "Enter your triangle: ";
    cin >> height;
    for (int i = height; i > 0; i--)
    {
        for (int h = 0; h < i; h++) {
            cout << "* ";
        }
        cout << endl;
    }*/



}

