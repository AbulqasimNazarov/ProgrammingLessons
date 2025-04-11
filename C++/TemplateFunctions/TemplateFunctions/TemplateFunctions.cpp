#include <iostream>
using namespace std;

//int Output(int num1, int num2) {
//    return num1 + num2;
//    /*sum = num1 + num2;
//    return sum;*/
//}


template<typename T1, typename T2, typename Tresult>
Tresult Draw(T1 num1, T2 num2) {
    return num1 + num2;
}



int main()
{

    int num1 = 9;
    double num2 = 17.8;

    cout<<Draw<int, double, float>(num1, num2);



    //string text = "Hello";
    /*int num1 = 8;
    int num2 = 58;
    int sum = Output(num1, num2);

    cout << sum<< endl;*/
}
