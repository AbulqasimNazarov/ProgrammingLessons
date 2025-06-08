#pragma once
#include <iostream>
using std::string;



class User {
private:
    string name;


public:
    
    User()
    {
        name = "Yaqub";
    }

    void SetName(string name) {
        this->name = name;
    }


    string GetName() {
        return name;
    }
};





//class User {
//public:
//    string name;
//    int age;
//    User(string name) {
//        this->name = name;
//    }
//
//    User() {
//
//    }
//
//
//    int TEST() {
//        return 98;
//    }
//
//
//};

