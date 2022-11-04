#ifndef HEADER_H
#define HEADER_H
using namespace std;

#include <string>
#include <cstring>
//string ReverseIt(char fInput[50]);

string ReverseIt(char fInput[50])
{
	char fOutput[50];
	int length = strlen(fInput);
	for(int i = 0; i < length; i++)
	{
		fOutput[i] = fInput[length-1-i];
		fOutput[length] = '\0';
	}
	return fOutput;
	//cout << "The output is " << fOutput << endl;
}

#endif