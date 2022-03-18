#include <iostream>

using namespace std;
//Code Written by Salim O. Oyinlola
/*
Write a structure tag and short main program that sets up a struct for a 
Super Eagles player that contains his name, earned run average (ERA), 
and team. In the program, declare one pitcher variable and pass its address to a function called Smokin’. 

This function fills the pitcher variable with the following information:

Name: Mikel Obi ERA: $ 10 million
Team: Chelsea
Once the data is in the structure, write the pitcher information to the screen.
*/

struct Pitcher
{
	char name[50];
	char ERA[50];
	char team[50];
};

void smokin(Pitcher*);
int main()
{
	Pitcher variable3;
	smokin(&variable3);

	cout << "Name: " << variable3.name << " ERA: " << variable3.ERA << endl;
	cout << "Team: " << variable3.team << endl;
	system("Pause");
}

void smokin(Pitcher *variable1)
{
	Pitcher variable2;
	strcpy(variable2.name, "Mikel Obi"); 
	strcpy(variable2.ERA, "$ 10 million");
	strcpy(variable2.team, "Chelsea");

	*variable1 = variable2;
}


//Twitter @SalimOpines: https://twitter.com/SalimOpines
//Github: https://www.github.com/salimcodes
