#include <iostream>
using namespace std;


//const int num = 10;

void Change(int* num) {
    *num = 35;
}


int main()
{

    


    int num = 10;
    Change(&num);
    cout << num << endl;







    /*int num = 20;
    int* test = &num;

    cout << test << endl;
    *test = 9;
    cout << *test << endl;*/









    //Change(&num);

    


    
    
    //cout << num << endl;
   
}
