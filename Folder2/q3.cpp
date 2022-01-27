#include <iostream>

using namespace std;
/*
The volume, V, and surface area, A, of a sphere of radius r are given respectively, by the expression

Write a complete C++ program, with class Sphere containing private and public members, that asks the
user to enter the radius of a sphere, calculates the volume and the area of the sphere, and prints the
results (to two decimal places) as well as all associated dimensional information.
*/

class Sphere{
	public:
		float radius;
		float area;
		float volume;
}sphere1;

int main()
{
	float pi = 3.14159265359;
	cout << "Enter the radius: " << endl;
	cin >> sphere1.radius;
	sphere1.volume = (4.00 * pi * sphere1.radius * sphere1.radius * sphere1.radius)/3.00;
	sphere1.area = (4.00 * pi * sphere1.radius *sphere1.radius);
	cout.precision(2);
	cout << "The area is given as: " << sphere1.area << " and the volume is given as: " << sphere1.volume << endl;
	system("Pause");
}