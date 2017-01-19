/*
Author: Alberto Fernandez Saucedo
Programming Example: Using predefined functions to find
and output the volume of a sphere, the distance between two points,
and the string function length to find the number of characters
in a string. 
*/

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const double PI = 3.1416;

int main()
{
	double volume;
	double radius;
	double point_1X, point_1Y;
	double point_2X, point_2Y;
	double distance;
	string str;
	
	cout << "Enter the radius of the sphere: ";
	cin >> radius;
	cout << endl;
	
	volume = (4 / 3) * PI * pow(radius, 3);
	
	cout << "The volume of the sphere is: " << volume
	<< endl << endl;
	
	cout << "Enter the coordinates of two points in the X-Y plane: ";
	cin >> point_1X >> point_1Y >> point_2X >> point_2Y;
	cout << endl;
	
	distance = sqrt(pow(point_2X - point_1X, 2) + pow(point_2Y - point_1Y, 2));
	
	cout << "The distance between the points is: " << distance << endl << endl;
	
	str = "Thank you for visiting!";
	
	cout << "The number of characters, including blanks, in \"" << str << "\" is: "
	<< str.length() << endl << endl; 
	
	return 0;
}
