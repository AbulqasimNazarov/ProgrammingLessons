#include <iostream>
using namespace std;

void N() {
	int N = 0;
	int M = 0;
	cout << "Enter your length: ", cin >> N;
	cout << "Enter your width: ", cin >> M;
	for (int N1 = 0; N1 < N; N1++) {

		for (int M1 = 0; M1 < M; M1++) {
			cout << "*";
		}
		cout << endl;

	}
}

void factorial() {
	int a = 1;
	int b = 1;
	cout << "Enter your number: ";
	cin >> a;
	for (int factor = 1; factor < a; factor++) {
		cout << factor * b;
		b =b *+1 ;
	}
}
void cube(){
int num1 = 0;
int degree = 3;
cout << "Enter your number: ", cin >> num1;
cout << num1 << "**" << degree << "=" << num1 * num1 * num1;
}

void big() {
	int a1, a2, a3 = 0;
	cout << "Enter num1: ", cin >> a1;
	cout << "Enter num2: ", cin >> a2;
	cout << "Enter num3: ", cin >> a3;
	if (a1 > a2 && a1 > a3) {
		cout << a1;
		
	}
	else if (a2 > a1 && a2>a3) {
		cout << a2;
	}
	else if (a3 > a1 && a3>a2) {
		cout << a3;
	}









}

int main() {
	int j = 0;


 for (int i = 0; i < 5; i++) {
	 cout << "* ";
	 for (j = 0; j < i; j++) {
		 cout << "* ";

	 }
	 cout << endl;
}
}