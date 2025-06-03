#include <iostream>
using namespace std;














//class bankCard {
//private:
//    int walletCount = 375;
//public:
//    int GetWalletCount() {
//        return this->walletCount;
//    }
//
//    void SetWalletCount(int money) {
//        this->walletCount = this->walletCount + money;
//    }
//
//};
class User {
public:
    string Name;
    int age;
private:
    int walletCount;
public:
    int GetwalletCount() {
        return this->walletCount;
    }
    void SetwalletCount(int num) {
        this->walletCount = this->walletCount + num;
    }

    User() {

    }

    User(string name, int age) {
        this->Name = name;
        this->age = age;
    }

};

int main()
{
    User user1 = User("Yusuf", 15);
    cout << user1.Name << endl;



    /*User user1 = User();
    string test1 = string("Yaqub");
    string test2 = "Yaqub";
    User user2 = User();
    user1.Name = "Yusuf";*/






    /*User user = User();
    user.SetwalletCount(15);
    cout << user.GetwalletCount() << endl;*/

    /*user.walletCount = 1;
    cout << user.walletCount << endl;*/



    /*int num = 90;
    
    MyInt* num2 = new MyInt();
    cout << num2->num << endl;
    delete num2;*/

}

