#include <iostream>
using namespace std;

void Test() {
	cout << "hello" << endl;

}


bool Test2() {
	return false;
}



int Sum() {
	int num1 = 6;
	int num2 = 4;
	
	return num1 + num2;
}




int main()
{

	Test();
	int num = Sum();
	cout << num << endl;

	bool num1 = Test2();
	cout << num1 << endl;
	
}


















