/* 
Author: Alberto Fernandez Saucedo
Program Example: Divisibility test by 3 and 9
*/

#include <iostream>

using namespace std;

int main()
{
	int number, temp, sum;
	
	cout << "Enter a positive integer: ";
	cin >> number;
	cout << endl;
	
	temp = number;
	
	sum = 0;
	
	do
	{
		sum = sum + number % 10;	// extract the last digit
									// add it to the sum
		number = number / 10;		// remove the last digit
		
	}
	while (number > 0);

	cout << "The sum of the digits = " << sum << endl;
	
	if (sum % 3 == 0)
		cout << temp << " is divisible by 3" << endl;
	else
		cout << temp << " is not divisible by 3" << endl;
		
	if (sum % 9 == 0)
		cout << temp << " is divisible by 9" << endl;
  	else
  		cout << temp << " is not divisible by 9" << endl;
  		
  		
	
	return 0;
}
