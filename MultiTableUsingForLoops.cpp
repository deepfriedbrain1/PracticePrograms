/* 
Author: Alberto Fernandez Saucedo
Program Example: Multiplication Table using for loops
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	for (int i = 1; i <= 5; i++) 
	{
		for (int j = 1; j <= 10; j++)
			cout << setw(3) << i * j;
		
		cout << endl;
	}
		
			
	
	return 0;
}
