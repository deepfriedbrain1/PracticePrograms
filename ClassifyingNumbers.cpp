/* 
Author: Alberto Fernandez Saucedo
Program Example: Classifying Numbers
This program reads a given set of integers and then prints
the number of odd and even integers. It also outputs the 
number of zeros. 

*/

#include <iostream>
#include <iomanip>

using namespace std;

const int N = 20;

int main()
{
	// Declare variables
	int counter; 	// loop control variable
	int number; 	// variable to store the new number
	int zeros = 0;	// variable to store the zero count
	int odds = 0;	// variable to store the odd count
	int evens = 0;	// variable to store the even count
	
	cout << "Please enter " << N << " integers, positive,"
		 << " negative, or zeros." << endl;
		 
	cout << "The numbers you entered are: " << endl;
	
	for (counter = 1; counter <= N; counter++)
	{
		cin >> number;
		cout << number << " ";
		
		switch (number % 2) // check the remainder
		{
			case 0:
				evens++;
				if (number == 0)
					zeros++;
				break;
			
			case 1:
			case -1:
				odds++;	
					
		} // end switch
	} // end for loop
	
	cout << endl;
	
	cout << "There are " << evens << " evens, "
		 << "which includes " << zeros << " zeros."
		 << endl;
		 
	cout << "The number of odd numbers is: " << odds
		 << endl;
	
	return 0;
}
