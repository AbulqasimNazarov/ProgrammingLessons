#include <iostream>
using namespace std;







//int Output1(int num) {
//    cout << num << endl;
//    return num;
//}

//string Output2(string num) {
//    cout << num << endl;
//    return num;
//}
//

template<typename T1, typename T2>
void Output1(T1 num1, T2 num2) {
    cout << num1+num1 << endl;

}

int main()
{
    int num1 = 10;
    int num2 = 15;
    Output1(num1, num2);
    double num3 = 15.55;
    double num4 = 1.23;
    Output1(num3, num1);






    /*int num = 90;
    string name = "Bob";
    bool cap = 1;
    char symbol = 'A';*/



    /*Output1(num);
    Output1(name);
    Output1(cap);
    Output1(symbol);*/

}
