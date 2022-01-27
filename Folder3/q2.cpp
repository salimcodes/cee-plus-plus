#include <iostream>

using namespace std;

/*
Consider two objects, cylinder and sphere. The volumes of the objects are governed by the following expressions:
,
where h is the height of the cylinder whilst r designate the radius of both the base of the cylinder and sphere.
Setup a C++ class for both the sphere and cylinder that will compute their volumes. 
The data members should be initialized to unity in the first instance 
and values of the data members as well as the volumes should be displayed on the screen. 
Furthermore, the classes should be able to accept the user’s input values and compute the corresponding volumes. 
The input values and volumes for both the sphere and cylinder, respectively, should be displayed on the screen.
*/
class Cylinder
{
	public:
		float height;
		float radius;
		float volume;
}sample1;

class Sphere
{
	public:
		float radius;
		float volume;
}sample2;
int main()
{
	sample1.height = 1.0;
	sample1.radius = 1.0;
	sample1.volume = 3.14159265359 * sample1.radius * sample1.radius * sample1.height;
	cout << "On the first instance of the CYLINDER where the data members are initialized to unity, we have: " << endl;
	cout << "The height is given as: " << sample1.height << " units." << endl;
	cout << "The radius is given as: " << sample1.radius << " units." << endl;
	cout << "The volume is given as: " << sample1.volume << " cubic-units." << endl;
	cout << endl;

	sample2.radius = 1.0;
	sample2.volume = (4.0 * 3.14159265359 * sample2.radius * sample2.radius * sample2.radius)/3.0;
	cout << "On the first instance of the SPHERE where the data members are initialized to unity, we have: " << endl;
	cout << "The radius is given as: " << sample2.radius << " units." << endl;
	cout << "The volume is given as: " << sample2.volume << " cubic-units." << endl;
	cout << endl;

	Cylinder user;
	cout << "Enter the radius of the cylinder: " << endl;
	cin >> user.radius;
	cout << "Enter the height of the cylinder: " << endl;
	cin >> user.height;
	user.volume = 3.14159265359 * user.radius * user.radius * user.height;
	
	

	Sphere user_input;
	cout << "Enter the radius of the sphere: " << endl;
	cin >> user_input.radius;
	user_input.volume = (4.0 * 3.14159265359 * user_input.radius * user_input.radius * user_input.radius)/3.0;


	cout << "The height of the user-defined cylinder is given as: " << user.height << " units." << endl;
	cout << "The radius of the user-defined cylinder is given as: " << user.radius << " units." << endl;
	cout << "The volume of the user-defined cylinder is given as: " << user.volume << " cubic-units." << endl;


	cout << "The radius of the user-defined sphere is given as: " << user_input.radius << " units." << endl;
	cout << "The volume of the user-defined sphere is given as: " << user_input.volume << " cubic-units." << endl;
	system("Pause");
}