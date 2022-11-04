#include <iostream>
#include "pitcher.h"
#include "smokin.h"
using namespace std;


/*
Write a structure tag and short main program that sets up a struct for a baseball pitcher that
contains his name, earned run average (ERA), innings pitched and strikeout percentage. In 
the program, declare one pitcher variable and pass its address to a function called Smokin’. 
This function fills the pitcher variable with the following information:
Name: Smokin’ Joe Green ERA: 1.2
Innings pitched: 55 Strikeout percentage: 0.25
Once the data is in the structure, write the pitcher information to the screen.
*/




int main()
{
	Pitcher instance_two;
	Smokin(&instance_two);
	cout << "Name: " << instance_two.name << " ERA: " << instance_two.ERA << endl;
	cout << "Innings pitched: " << instance_two.innings << "  Strikeout percentage: " << instance_two.StrikeoutPercentage << endl;
	system("Pause");
	return 0; 
}
