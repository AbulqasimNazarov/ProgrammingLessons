#include "MyString.h"
#include "User.h"
#include <string>
#include <iostream>
using namespace std;




int main()
{
    /*char* symbolText = new char[1000] {
        "hello"
        };*/


    /*string text = string();
    cout << text << endl;
    MyString myobj = MyString();*/

    //string name = "Hello Yaqub";
    //name.append(3, '!');
    //cout << name << endl;

    //MyString myName = MyString("Hello Yusif");
    //myName.Append(3, '!');
    //cout << myName.text << endl;
    User obj = User("Abulqasim", "Nazarov");
    obj.Print();
    
    
    

}

