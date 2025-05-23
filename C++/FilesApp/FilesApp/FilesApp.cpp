#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;





void ReadAllText(FILE* stream) {
	

	while (!feof(stream)) {
		int symbol = fgetc(stream);

		cout << (char)symbol;
	}

	cout << endl;
}




int main()
{
    FILE* file = fopen("qwerty.txt", "w");

    int nums[]{
        123,645,345345,567567,99999
    };

    fread(nums, sizeof(int), 5, file);
   


    fclose(file);
    
    return 0;

}

