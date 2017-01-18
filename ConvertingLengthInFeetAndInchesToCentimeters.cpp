/*
Author: Alberto Fernandez Saucedo
Programming Example: Converting length in feet and inches to centimeters
Purpose: Simple problem analysis and algorithm design
Description: Write a program that takes as input given lengths expressed in feet
and inches. The program then converts and output the lengths in centimeters.
Assume that the given lengths in feet and inches are integers.

Notes: 1 inch = 2.54 centimeters, 1 foot = 12 inches

Comments:
Based on analysis of problem, an algorithm design follows:
1. Get the length in feet and inches
2. Convert the length into total inches.
3. Convert total inches into centimeters.
4. Output centimeters.

*/

#include <iostream>
using namespace std;

// Constants 
const double CENTIMETERS_PER_INCH = 2.54;
const int INCHES_PER_FOOT = 12;

int main(){
	
	// Variable declarations 
	int feet, inches;
	int total_inches;
	double centimeters;
	
	// Prompt user to enter feet and then inches
	cout << "Enter two integers, first for feet and then for inches: ";
	// User input
	cin >> feet >> inches;
	// End of line
	cout << endl; 
	
	// Show user what they have entered 
	cout << "You entered " << feet << " feet and " << inches << " inches." << endl;
	
	// Calculate total inches
	total_inches = INCHES_PER_FOOT * feet + inches;  
	
	
	cout << "The total number of inches = " << total_inches << endl;
	
	centimeters = CENTIMETERS_PER_INCH * total_inches;
	
	cout << "The number of centimeters = " << centimeters << endl;

	return 0;
}
