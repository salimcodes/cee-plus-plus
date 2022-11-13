#ifndef HEADER_H
#define HEADER_H

#include <cstring> //For the strlen function that evaluates the length of the string
using namespace std;

void ReverseIt(char Input[50])
{

	char Output[50];
	int length;
	length = strlen(Input);
	for(int i = 0; i < 49; i++)
	{
		Output[i] = Input[length-1-i];
		Output[length] = '\0';
	}
	cout << "The reversed input is "<< Output << endl;
}

#endif
