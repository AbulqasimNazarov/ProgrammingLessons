#pragma once
#include <iostream>
using namespace std;


class User
{
public:
	string full_name;
	User(string name, string surname) {
		full_name = name + " " + surname;
		
	}
	
	void Print() {
		for (int i = 0; i < full_name.length(); i++)
		{
			cout << full_name[i];
			if (full_name[i] == ' ')
			{
				cout << endl;
			}
		}
	}
	
};

