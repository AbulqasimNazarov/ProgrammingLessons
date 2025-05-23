#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;



//int* Test() {
//    int* ptr = new int(78);
//    return ptr;
//}

int main()
{







    /*int num = 0;
    cin >> num;
    
    int* arr = new int[num]{

    };
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << endl;
    }
    delete arr;
    arr = nullptr;*/





    //int* ptrArr = new int[10];
  


    /*int* ptrNum = Test();
    cout << *ptrNum << endl;
    delete ptrNum;*/


    /*int n, m = 0;
    cout << "Enter n: ";
    cin >> n;
    int* arr1 = new int[n] {
        
    };
    for (int i = 0; i < n; i++)
    {
        cout << "Enter m: ";
        cin >> m;
        arr1[i] = m;
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << arr1[i] << endl;
        
    }
    delete arr1;*/


    /*int n, m, result = 0;
    cout << "Enter n: ";
    cin >> n;
    int* arr1 = new int[n] {

        };
    for (int i = 0; i < n; i++)
    {
        cout << "Enter m: ";
        cin >> m;
        arr1[i] = m;
        result += arr1[i];

    }
    cout << result / n;
    delete arr1;*/
    srand(time(0));
    int n, m = 0;
    cout << "Enter n: ";
    cin >> n;
    int* arr1 = new int[n]
        {

        };
    int* arr2 = new int[n]
        {

        };
    for (int i = 0; i < n; i++)
    {
        m = rand() % 100;
        arr1[i] = m;
        arr2[i] = arr1[i];

    }
    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << arr2[i];
    }
    delete arr1;
    delete arr2;
}

