#include <iostream>
using namespace std;


int Sum(int num1, int num2) {
	int total = num1 + num2;
	return total;
}


int Minus(int num1, int num2) {

	int total = num1 - num2;
	return total;
}




int main()
{

	/*int num1 = 34;
	int num2 = 21;
    
	if (num1 > num2)
	{
		cout << char(65) << endl;
	}
	else {
		cout << char(70) << endl;
	}

	char test = (num1 > num2) ? char(65) : char(70);
	cout << test << endl;*/


	/*string test = (num1 > num2) ? "1" : "2";

	cout << test << endl;*/





	/*char test = 67;
	switch (test) {
	case 67:
		cout << "A" << endl;
		
	case 6:
		
		cout << "B" << endl;
		break;
	default:
		break;
	}*/
	
	int num1, num2;
	cout << "Enter num1: ", cin >> num1;
	cout << "Enter num2: ", cin >> num2;


	int test1 = Sum(num1, num2);
	int test2 = Minus(num1, num2);
	cout << test1 << endl;

	cout << test2 << endl;
	



}





