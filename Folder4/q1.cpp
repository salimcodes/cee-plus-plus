#include <iostream>

using namespace std;
/*
Write a structure tag and short main program that sets up a struct for a baseball pitcher that
contains his name, earned run average (ERA), 
innings pitched and strikeout percentage. 
In the program, declare one pitcher variable and pass its address to a function called Smokin’. 
This function fills the pitcher variable with the following information:
Name: Smokin’ Joe Green ERA: 1.2
Innings pitched: 55 Strikeout percentage: 0.25
Once the data is in the structure, write the pitcher information to the screen.
*/

struct Pitcher
{
	char name[50];
	float ERA;
	int innings_pitched;
	float strikeout_percentage;
};

void smokin(Pitcher*);
int main()
{
	Pitcher variable3;
	smokin(&variable3);

	cout << "Name: " << variable3.name << " ERA: " << variable3.ERA << endl;
	cout << "Innings pitched: " << variable3.innings_pitched << " Strikeout percentage: " << variable3.strikeout_percentage << endl;
	system("Pause");
}

void smokin(Pitcher *variable1)
{
	Pitcher variable2;
	strcpy(variable2.name, "Smokin' Joe Green"); 
	variable2.ERA = 1.2;
	variable2.innings_pitched = 55;
	variable2.strikeout_percentage = 0.25;

	*variable1 = variable2;
}