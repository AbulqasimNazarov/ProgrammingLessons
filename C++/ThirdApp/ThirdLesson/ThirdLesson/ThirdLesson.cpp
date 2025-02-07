#include <iostream>
using namespace std;
// i - input
// o - output
// stream -  potok

int main() 
{
	/*bool test = 1;
	if (test) {
		test = 0;
		cout << "hello";
	}
	if (test) {
		test = 1;
		cout << "hello";
	}
	if (test)
	{
		test = 1; 
		cout << "hello";
	}*/


	/*int num = 65;
	cout << double(num);*/

	

	/*int test = 0;
	while (test < 5) {
		cout << "Hello" << endl;
		test++;
	}*/
	
	int number = 0;
	int a = 0;
	int b = 0;
	cout << "Enter your number: ";
	cin >> number;
	while (a < number) {
		while (b < number - 1) {
			cout << "* ";
			b++;
			
		}
		b = 0;
		cout << "*" << endl;
		a++;
	}
	
	
}



