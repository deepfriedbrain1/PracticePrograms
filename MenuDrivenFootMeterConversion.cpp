/* 
Author: Alberto Fernandez Saucedo
Program Example: Menu-driven program of feet and meter conversions

*/

#include <iostream>

using namespace std;

// Global variables
const double CONVERSION = 2.54;
const int INCHES_IN_FOOT = 12;
const int CENTIMETERS_IN_METER = 100;

void showChoices();

void feetToMeters(int feet, int inches, int& meters, int& centi);

void metersToInches(int meters, int centi, int& feet, int& inches);

int main()
{
	int feet, inches;
	int meters, centimeters;
	int choice;
	
	do
	{
		showChoices();
		cin >> choice;
		cout << endl;
		
		switch(choice)
		{
			case 1:
				cout << "Enter feet and inches: ";
				cin >> feet >> inches;
				feetToMeters(feet, inches, meters, centimeters);
				
				cout << feet << " feet (foot), "
					 << inches << " inch(es) = "
					 << meters << " meter(s), "
					 << centimeters << " centimeter(s). " << endl;
				break;
			
			case 2:
				cout << "Enter meters and centimeters: ";
				cin >> meters >> centimeters;
				cout << endl;
				
				metersToInches(meters, centimeters, feet, inches);
				
				cout << meters << " meter(s), "
					 << centimeters << " centimeter(s) = "
					 << feet << " feet (foot), "
					 << inches << " inch(es). " << endl;
				break;
			
			case 99:
				break;
			
			default:
				cout << "Invalid input." << endl;
		}
	}
	while (choice != 99);
	
	return 0;
}

void showChoices()
{
	cout << "Enter:" << endl;
	cout << "1: To convert from feet and inches to meters "
	   	 << "and centimeters." << endl;
	cout << "2: To convert from meters and centimeters to feet "
		 << "and inches." << endl;
	cout << "99: To quit program." << endl;	
}

void feetToMeters(int feet, int inches, int& meters, int& centi)
{
	int totalInches = feet * INCHES_IN_FOOT + inches;
	
	centi = static_cast<int>(totalInches * CONVERSION);
	meters = centi / CENTIMETERS_IN_METER;
	centi = centi % CENTIMETERS_IN_METER;	
}

void metersToInches(int meters, int centi, int& feet, int& inches)
{
	int centimeters;
	
	centimeters = meters * CENTIMETERS_IN_METER + centi;
	inches = static_cast<int>(centimeters / CONVERSION);
	feet = inches / INCHES_IN_FOOT;
	inches = inches % INCHES_IN_FOOT;
}
