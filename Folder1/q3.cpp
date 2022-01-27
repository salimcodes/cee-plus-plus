#include <iostream>

//Code written by Salim O. Oyinlola

#include <string>

using namespace std;


/*
Write a program that sets up a Date structure (integer for month, day and year) and a
Person structure (name and birthday – using the Date struct). The program should have a
function (FillPerson) that asks the user to enter all the names and birthday information. The
prototype for this function is:
Person FillPerson();
You should also have a function called WritePerson that writes out all the person
information using the name of the month (as opposed to the integer value) for the birthday
month. The prototype for this function is:
void WritePerson(Person);
your program should have two Person variables. It should fill these two variables and then
call a function called WhoIsOlder, which is sent both Person variables. The function
determines who is older and writes the age status to the screen. (Note: WhoIsOlder should
call WritePerson twice.)
*/

// Structures Prototypes
struct Date
{
	int month;
	int day;
	int year;
};

struct Person
{
	char name[50];
	Date birthday;
};

//Function Prototypes
Person FillPerson();
void WritePerson(Person);
Person WhoIsOlder(Person, Person);

int main()
{
	//Defining first person and calling functions to that effect
	Person sample1;
	sample1 = FillPerson();
	WritePerson(sample1);

	// Defining second person and calling functions to that effect
	Person sample2;
	sample2 = FillPerson();
	WritePerson(sample2);

	Person olderperson;
	olderperson = WhoIsOlder(sample1, sample2);

	cout << "The older person is " << olderperson.name << endl; 

	cout << olderperson.name << " is " << 2021 - olderperson.birthday.year << " years old." << endl;
	system("Pause");

}

Person FillPerson()
{
	Person person1;
	cout << "Enter name: " << endl;
	cin.getline(person1.name, 50);
	cout << "Enter year of birth: " << endl;
	cin >> person1.birthday.year;
	cout << "Enter month of birth: (As a number); 01 - January, 02 - February... " << endl;
	cin >> person1.birthday.month;
	cout << "Enter day of birth: " << endl;
	cin >> person1.birthday.day;
	cin.ignore();
	return person1;
}

void WritePerson(Person person1)
{
	cout << "Your name is " << person1.name << endl;
	if(person1.birthday.month == 1)
	{
		cout << "You were born on " << " January " << person1.birthday.day << ", "<< person1.birthday.year << endl;
	}
	else if(person1.birthday.month == 2)
	{
		cout << "You were born on " << " February " << person1.birthday.day << ", "<< person1.birthday.year << endl;
	}
	else if(person1.birthday.month == 3)
	{
		cout << "You were born on " << " March " << person1.birthday.day << ", "<< person1.birthday.year << endl;
	}
	else if(person1.birthday.month == 4)
	{
		cout << "You were born on " << " April " << person1.birthday.day << ", "<< person1.birthday.year << endl;
	}
	else if(person1.birthday.month == 5)
	{
		cout << "You were born on " << " May " << person1.birthday.day << ", "<< person1.birthday.year << endl;
	}
	else if(person1.birthday.month == 6)
	{
		cout << "You were born on " << " June " << person1.birthday.day << ", "<< person1.birthday.year << endl;
	}
	else if(person1.birthday.month == 7)
	{
		cout << "You were born on " << " July " << person1.birthday.day << ", "<< person1.birthday.year << endl;
	}
	else if(person1.birthday.month == 8)
	{
		cout << "You were born on " << " August " << person1.birthday.day << ", "<< person1.birthday.year << endl;
	}
	else if(person1.birthday.month == 9)
	{
		cout << "You were born on " << " September " << person1.birthday.day << ", "<< person1.birthday.year << endl;
	}
	else if(person1.birthday.month == 10)
	{
		cout << "You were born on " << " October " << person1.birthday.day << ", "<< person1.birthday.year << endl;
	}
	else if(person1.birthday.month == 11)
	{
		cout << "You were born on " << " November " << person1.birthday.day << ", "<< person1.birthday.year << endl;
	}
	else if(person1.birthday.month == 12)
	{
		cout << "You were born on " << " December " << person1.birthday.day << ", "<< person1.birthday.year << endl;
	}
	cout << endl;
}

Person WhoIsOlder(Person person1, Person person2)
{
	if(person1.birthday.year < person2.birthday.year)
	{
		return person1;
	}
	else if(person1.birthday.year == person2.birthday.year || person1.birthday.month < person2.birthday.month)
	{
		return person1;
	}
	else if(person1.birthday.year == person2.birthday.year || person1.birthday.month == person1.birthday.month || person1.birthday.day < person2.birthday.day)
	{
		return person1;
	}
	else
		return person2; 

}