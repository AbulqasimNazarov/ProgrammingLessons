#include <iostream>
#include <string>
#include "Users.h"
using namespace std;

int main()
{
    
    User user = User();
    user.SetName("Yusuf");
    cout << user.GetName() << endl;
    
}

