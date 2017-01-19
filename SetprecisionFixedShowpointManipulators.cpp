/* 
Author: Alberto Saucedo Fernandez
Program Example: setprecision, fixed, showpoint manipulators

*/

#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159265;

int main()
{
	double radius = 13.23;
	double height = 15.43;
	
	cout << fixed << showpoint;
	
	cout << setprecision(2)
		 << "setprecision(2) " << endl;
		 
	cout << "radius = " << radius << endl;
	cout << "height = " << height << endl;
	cout << "volume = " << PI * radius * radius * height << endl;
	cout << "PI = " << PI << endl << endl;

	cout << setprecision(3)
		 << "setprecision(3) " << endl;
		 
	cout << "radius = " << radius << endl;
	cout << "height = " << height << endl;
	cout << "volume = " << PI * radius * radius * height << endl;
	cout << "PI = " << PI << endl << endl;	
	
	cout << setprecision(4)
		 << "setprecision(4) " << endl;
		 
	cout << "radius = " << radius << endl;
	cout << "height = " << height << endl;
	cout << "volume = " << PI * radius * radius * height << endl;
	cout << "PI = " << PI << endl << endl;
	
	cout << "Different precisions set: "
		 << setprecision(3) << radius << ", "
		 << setprecision(4) << height << ", "
		 << setprecision(5) << PI << endl;
		 
	return 0;
}
