#include <iostream>
#include "ReverseIt.h"
using namespace std;

/*
Write a complete C++ program that asks the user to enter a character string. Send the string 
to a function called ReverseIt. This function will fill a second string so that the original string 
is reversed. Limit the size of the strings to fifty characters. The last character in the original 
string (before the null) should be the first character of the second string. Incorporate a loop 
so that the user can continue to enter strings until he or she chooses to stop.
*/

//void ReverseIt(char Input[50]);
int main()
{

	char rInput[50];
	cout << "Enter the string you want to reverse: " << endl;
	cin.getline(rInput, 50);
	ReverseIt(rInput);

	system("Pause");
	return 0;
}
