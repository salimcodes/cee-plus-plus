#include <iostream>
#include <string>
#include <cstring>
using namespace std;

//Code written by Salim O. Oyinlola

/*
Write a complete C++ program that asks the user to enter a character string.
Send the string to a function called ReverseIt.
This function will fill a second string so that the original string is reversed.
Limit the size of the strings to fifty characters.
The last character in the original string (before the null) should be the first character of the second string.
Incorporate a loop so that the user can continue to enter strings until he or she chooses to stop.
*/

string ReverseIt(char f_input[50]);

int main()
{
	
	char answer;
	do{
	char input[50];
	cout << "Input the string: " << endl;
	cin.getline(input, 50);
	cout << "The output for the given input is " << ReverseIt(input) << endl;
	cout << "Do you want to perform the operation again? (Y for Yes and N for No) " << endl;
	cin >> answer;
	cin.ignore();
	system("Pause");
	}
	while(answer =='Y' || answer == 'y');
}

string ReverseIt(char f_input[50])
{
	char foutput[50];
	int length = strlen(f_input);
	for(int i = 0; i < length; ++i)
	{
		foutput[i] = f_input[length-i-1];
		foutput[length] = '\0';
	};
	return foutput;
}

//Twitter @SalimOpines: https://twitter.com/SalimOpines
//Github: https://www.github.com/salimcodes
