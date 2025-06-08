#pragma once
#include <iostream>
#include <string>
using namespace std;
using std::string;
class Book
{
public:
	string title;
	Book(string text)
	{
		this->title = text;
	}

	void printInfo() {
		cout << this->title;

	}
	void printInfo(bool withPrice) {
		if (withPrice)
		{
			cout << ": 90 m";
		}
		else
		{
			cout << this->title;
		}


	}
};

