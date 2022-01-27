#include <iostream>
using namespace std;


/*
Write a structure tag and short main program that sets up a struct for a 
University student that contains his name, cumulative grade point average (CGPA), and university. 
In the program, declare one pitcher variable and pass its address to a function called Smokin’. 
This function fills the pitcher variable with the following information:

Name: Emmanuel Okocha CGPA: 4.70
University: University of Lagos
Once the data is in the structure, write the pitcher information to the screen.
*/

struct Student
{
	char name[50];
	float CGPA;
	char University[50];
}student1;
int main()
{
	strcpy(student1.name, "Emmanuel Okocha");
	student1.CGPA = 4.7000;
	strcpy(student1.University, "University of Lagos");
	//cout.precision(2);
	cout << "Name: " << student1.name << " CGPA: " << student1.CGPA << endl;
	cout << "University: " << student1.University << endl;
	system("Pause");
}