/*
Author: Alberto Fernandez Saucedo
Programming Example: Making Cents
Make a program that takes input of any expressed cents and returns 
the number of half-dollars, quarters, dimes, nickels, and pennies, 
returning the max of each in that order. 

Problem Analysis and Algorithm Design:
1. Get the change in cents.
2. Find the number of half-dollars.
3. Calculate the remaining change.
4. Find the number of quarters.
5. Calculate the remaining change.
6. Find the number of dimes.
7. Calculate the remaining change.
8. Find the number of nickels.
9. Calculate the remaining change, which is the number of pennies. 

*/

#include <iostream>
using namespace std;

// Constants
const int HALF_DOLLAR = 50;
const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;

int main()
{
	// Variable declaration
	int change;
	
	cout << "Please enter the change in cents: ";
	cin >> change;
	cout << endl;
	
	cout << "The change you have entered is: " 
	<< change << endl;
	
	cout << "The number of half-dollars to be returned "
	<< "is: " << change / HALF_DOLLAR << endl;
	
	change %= HALF_DOLLAR; // Remainder after half-dollars 
	
	cout << "The number of quarters to be returned is: "
	<< change / QUARTER << endl;
	
	change %= QUARTER; // Remainder after quarters
	
	cout << "The number of dimes to be returned is: "
	<< change / DIME << endl;
	
	change %= DIME; // Remainder after dimes
	
	cout << "The number of nickels to be returned is: "
	<< change / NICKEL << endl;
	
	change %= NICKEL; // Remainder after nickels (last conversion is into pennies)
	
	cout << "The number of pennies to be returned is: "
	<< change << endl;
	
	return 0;
	
}
