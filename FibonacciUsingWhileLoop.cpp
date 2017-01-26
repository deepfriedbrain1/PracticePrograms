/*
Author: Alberto Fernandez Saucedo
Program: nth Fibonacci number using while loop
Given the first two number of a Fibonacci sequence, this
program determines and outputs the desired number of the
Fibonacci sequence. 

*/

#include <iostream>

using namespace std;

int main()
{
	// Variable declaration
	int prev1;
	int prev2;
	int current;
	int counter;
	int nthFibonacci;
	
	cout << "Enter the first two Fibonacci numbers: ";
	cin >> prev1 >> prev2;
	cout << endl;
	
	cout << "The first two Fibonacci numbers are "
		 << prev1 << " and " << prev2 << endl;
		 
	cout << "Enter the position of the desired Fibonacci number: ";
	cin >> nthFibonacci;
	cout << endl;
	
	if (nthFibonacci == 1)
		current = prev1;
	else if (nthFibonacci == 2)
		current = prev2;
	else
		{
			counter = 3;
			
			while(counter <= nthFibonacci)
			{
				current = prev2 + prev1;
				prev1 = prev2;
				prev2 = current;
				counter++;
				
			} // end while 
		} // end else
		
	cout << "The Fibonacci number at position " << nthFibonacci 
		 << " is " << current << endl;
			 
	return 0;
	
} // end main
