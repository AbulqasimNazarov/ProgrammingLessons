#include <iostream>

using namespace std;


//class Rectangle {
//private:
//    int Width = 0;
//    int Length = 0;
//public:
//    void SetLength(int a){
//        this->Length = a;
//    }
//    void SetWidth(int b) {
//        this->Width = b;
//    }
//    int GetSquare() {
//        return (this->Length * this->Width);
//    }
//    
//};
//int main() {
//    int x = 0;
//    int y = 0;
//    cout << "Enter yout Length: ";cin >> x;
//    cout << "Enter yout Width: ";cin >> y;
//    Rectangle test;
//    test.SetLength(x);
//    test.SetWidth(y);
//    int ab = test.GetSquare();
//    cout << ab << endl;
//}
class CashApp{
private:
    string Name;
    double Balance;
    double CashMoney;
public:
    void SetName(string name) {
        this->Name = name;
    }
    void SetBalance(double balance) {
        this->Balance = balance;
    }
    void SetCashMoney(double cashmoney) {
        this->CashMoney = cashmoney;
    }
    string GetName() {
        return this->Name;
    }
    double GetBalance() {
        return this->Balance;
    }
    void SetMinusCash(double money) {
        this->Balance = this->Balance - money;
    }
    
};
int main() {
    CashApp app;
    string Name;
    cout<<"Enter name: ", cin >> Name;
    double balance;
    cout<<"Enter balance: ", cin >> balance;
    double cash;
    cout<<"Enter cash: ", cin >> cash;
    app.SetName(Name);
    app.SetBalance(balance);
    app.SetMinusCash(cash);

    cout<<"Name: "<<app.GetName()<<endl;

    cout<<"Total Balance: "<<app.GetBalance()<<endl;
   

      
}
//class User {
//public: //inkapsulaciya
//    string Name;
//    int age = 0;
//    void Paint() {
//        cout << this->Name << endl;
//    }
//    
//};


//class Car {
//private:
//    string Model;
//    int age;
//public:
//    void SetModel(string name) {
//        this->Model = name;
//    }
//    string GetModel() {
//        return this->Model;
//    }
//};



//int main()
//{

    /*Car car1;
    car1.SetModel("Yaqub");
    string model = car1.GetModel();
    cout << model << endl;*/
    /*Car car1;
    Car car2;
    car1.Model = "Mercedes";
    car2.Model = "BMW";
    cout << car1.Model << endl;
    cout << car2.Model << endl;*/


    /*string user1Name = "Yaqub";
    int age1 = 90;
    string user2Name = "Yusuf";
    int age1 = 30;*/





    /*User user1;
    user1.Name = "Yaqub";
    cout << user1.Name << endl;*/

    /*User u1;
    User u2;
    u1.Name = "Yaqub";
    u1.age = 13;
    u1.Name = "Yusuf";
    u1.Paint();*/
//}
