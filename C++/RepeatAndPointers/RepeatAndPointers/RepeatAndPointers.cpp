#include <iostream>
using namespace std;



//void MoneyTalks(double* money) {
//    *money = (*money * 150) / 100;
//}

//void AddText(string* TxtFile) {
//    *TxtFile = *TxtFile + " World";
//}


void Test(int* num) {
    *num = 34;
}





int main()
{
    int test = 89;
    Test(&test);
    cout << test << endl;
    //int* test1 = &test;


    /*string TxtFile = "";
    cout << "Enter Hello: ";
    cin >> TxtFile;
    AddText(&TxtFile);
    cout << TxtFile;*/
 












    /*double money = 0;
    cout << "Change your money: ";
    cin >> money;
    MoneyTalks(&money);
    cout << money;*/
    






    
    
    




    /*short number = 23;

    cout << &number << endl;

    short* test = &number;

    *test = 70;
    cout << number << endl;*/
    






    /*short* test = &number;
    test++;
    cout << test << endl;*/

    //int num = 10;
    //Change(&num);
    //cout << num << endl;







    /*int num = 20;
    int* test = &num;

    cout << test << endl;
    *test = 9;
    cout << *test << endl;*/









    //Change(&num);

    


    
    
    //cout << num << endl;
   
}
//const int num = 10;

//void Change(int* num) {
//    *num = 35;
//}