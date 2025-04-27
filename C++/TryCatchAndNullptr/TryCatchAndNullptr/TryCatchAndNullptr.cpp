#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <time.h>
#include <Windows.h>
using namespace std;

//void change(int* num) {
//    *num = 5;
//}


//void Divide(int num1, int num2) {
//    if (num2 == 0)
//    {
//        
//        throw 404;
//        
//    }
//    else {
//        int result = num1 / num2;
//        cout << result << endl;
//    }
//    
//    
//
//
//
//    /*if (num2 != 0)
//    {
//        int result = num1 / num2;
//        cout << result << endl;
//    }
//    else {
//        cout << "Error" << endl;
//    }*/
//    
//}




int main()
{

    srand(time(0));
    int arr1[10][10]{

    };
    int arr2[10][10]{

    };
    int a = 0;
    int b = 0;
    arr1[5][5] = 1;
    arr1[5][6] = 1;
    arr1[5][7] = 1;
    arr1[2][2] = 1;
    arr1[2][3] = 1;
    arr1[2][4] = 1;
    arr1[7][7] = 1;
    arr1[8][7] = 1;
    arr1[9][7] = 1;

    arr2[5][5] = 1;
    arr2[5][6] = 1;
    arr2[5][7] = 1;
    arr2[2][2] = 1;
    arr2[2][3] = 1;
    arr2[2][4] = 1;
    arr2[7][7] = 1;
    arr2[8][7] = 1;
    arr2[9][7] = 1;
    
    
    

    

    while (true)
    {
        system("cls");
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++) {
                cout << arr1[i][j] << " ";
            }
            cout << "  ";
            for (int x = 0; x < 10; x++)
            {
                if (arr2[i][x] == 1)
                {
                    cout << 0 << " ";

                }
                else {
                    cout << arr2[i][x] << " ";

                }


            }
            cout << endl;
        }

        cout << "Enter x: "; cin >> a;
        cout << "Enter y: "; cin >> b;
        if (arr2[a][b] == 1)
        {
            arr2[a][b] = 3;
        }
        else {
            string Wait[] = {".", ".", "."};
            cout << "Waiting";
            for (int i = 0; i < 3; i++)
            {
                
                Sleep(350);
                cout << Wait[i] ;
            }
        }
    }
    
    

    /*try {
        throw false;
    }
    catch (double doubl) {
        cout << "Error code: " << doubl << endl;
    }
    catch (int innt) {
        cout << "Error code: " << innt << endl;
    }
    catch (bool bll) {
        cout << "Error code: " << bll << endl;
    }
    catch (char chr) {
        cout << "Error code: " << int(chr) << endl;
    }*/
    
    

















    /*int num = 19;
    int* ptr = &num;
    change(&num);
    cout << num << endl;*/












    //int* ptrNum = num;


    /*change(num);
    cout << num << endl;*/







    /*int* ptr = nullptr;
    cout << ptr << endl;*/
    
    /*strin userName = "";
    string password = "";


    if (userName.empty() || password.empty())
    {
        cout << "Enter again";
    }*/


    /*cout << "Enter userName: ", cin >> userName;
    cout << "Enter password: ", cin >> password;*/
    /*cout << userName << endl;
    cout << password << endl;*/


}
