#include <iostream>
using namespace std;

template<typename T1, typename T2, typename T3,typename T4>
void Output(T1 num, T2 num1, T3 num2, T4 num3){
    cout << num + num1 + num2 + num3 << endl;

}

int main()
{
    int num = 90;
    float name = 18.5;
    double balon = 7.77;
    char Asci = 'A';
    Output(num, name, balon, Asci);
} 
