#pragma once
#include <string>
using std::string;


class MyString
{
public:
	string text;

	MyString() {

	}
	MyString(string myText)
	{
		text = myText;
	}

	void Append(int countSymbol, char symbol) {
		for (int i = 0; i < countSymbol; i++)
		{
			text += symbol;
		}
	}

	void Append(const char* const ptr) {

	}

};

