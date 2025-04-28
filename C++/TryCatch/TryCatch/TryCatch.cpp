#include <iostream>
using namespace std;




/*1.Напишите функцию, которая делит два целых числа. 
Если знаменатель равен нулю, выбросите исключение и обработайте его.

2.Напишите программу, которая запрашивает возраст пользователя.
Если возраст меньше 0 или больше 150 — выбросите исключение.
В catch-блоке выведите сообщение об ошибке.

3. Напишите программу, которая создает массив из 5 элементов.
Пользователь вводит индекс элемента для доступа.
Если индекс выходит за границы массива — выбрасывается и обрабатывается исключение.

*/





int main()
{
   /*try {

        int num1 = 0;
        int num2 = 0;
        
        cout << "Enter your num1: "; cin >> num1;
        cout << "Enter your num2: "; cin >> num2;
        if (num2 != 0)
        {
            int result = num1 / num2;
            cout << result;
        }
        else {
            throw 404;
        }
    }
    catch (int error) {
        cout << "Exited code with -- " << error;
    }
    try
    {
        int age = 0;
        cout << "Enter your age: "; cin >> age;
        if (age <= 0 || age >= 150) {
            throw 404;
        }
        else {
            cout << "Your age is: "<< age << endl;
        }
    }
    catch (int AgeErrorCode)
    {
        cout << "Exited code with -- " << AgeErrorCode;
    }*/
    /*try
    {
        int arr[5]{ 1, 16, 101, 7, 2011 };
        int i = 0;
        cout << "Enter index: "; cin >> i;
        if (i > 5) {
            throw 404;
        }
        else if(i < 0){
            throw 404;
        }
        
        else {
            cout << arr[i];
        }

    }
    catch (int ArraysErrorCode)
    {
        cout << "Exited code with " << ArraysErrorCode;
    }*/









































    /*try
    {
        if (2<5)
        {
            throw 404;
        }
    }
    catch (int errorCode)
    {
        cout << "Error" << errorCode << endl;
    } 
    catch (double errorCode)
    {
        cout << "Error" << errorCode << endl;
    }
    catch (char errorCode)
    {
        cout << "Error" << errorCode << endl;
    }*/
    
}

