/* 
Author: Alberto Fernandez Saucedo
Program: Examples of scientific and fixed manipulators 

*/

#include <iostream>

using namespace std;

int main()
{
	double hours = 45.35;
	double rate = 10.00;
	double tolerance = 0.01000;
	
	cout << "hours = " << hours << ", rate = " << rate 
		 << ", pay = " << hours * rate << ", tolerance = "
		 << tolerance << endl << endl;
		 
	cout << scientific;
	cout << "Scientific notation: " << endl;
	cout << "hours = " << hours << ", rate = " << rate 
		 << ", pay = " << hours * rate << ", tolerance = "
		 << tolerance << endl << endl;
	
	cout << fixed;	 
	cout << "Fixed decimal notation: " << endl;
	cout << "hours = " << hours << ", rate = " << rate 
		 << ", pay = " << hours * rate << ", tolerance = "
		 << tolerance << endl << endl;
		 
	return 0;
	
}
