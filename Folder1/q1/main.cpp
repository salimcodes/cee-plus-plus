#include <iostream>
#include <string>
#include <cstring>
#include "reverseit.h"
using namespace std;


/*
Write a complete C++ program that asks the user to enter a character string. Send the string 
to a function called ReverseIt. This function will fill a second string so that the original string 
is reversed. Limit the size of the strings to fifty characters. The last character in the original 
string (before the null) should be the first character of the second string. Incorporate a loop 
so that the user can continue to enter strings until he or she chooses to stop.
*/


int main()
{
	char answer;
	do
	{	
		char input[50];
		cout << "Enter the character string: " << endl;
		cin.getline(input, 50);
		cout << "The output is given as " << ReverseIt(input) << endl;
		cout << "Do you wish to continue? [Y/N]" << endl;
		cin >> answer;
		cin.ignore();
	}while(answer == 'Y' || answer == 'y');
	system("Pause");
	return 0;
}


