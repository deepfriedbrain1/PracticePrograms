/* 
Author: Alberto Fernandez Saucedo
Program: Peek & Putback Functions Examples
*/

#include <iostream>

using namespace std;

int main()
{
	char c;
	
	cout << "Enter a string: ";
	cin.get(c);
	cout << endl;
	
	cout << "After first cin.get(c); c = " << c << endl;
	
	cin.get(c);
	
	cout << "After second cin.get(c); c = " << c << endl;
	
	cin.putback(c);
	cin.get(c);
	
	cout << "After putback and then cin.get(c); c = " << c << endl;
	
	c = cin.peek();
	cout << "After cin.peek(); c = " << c << endl;
	
	cin.get(c);
	cout << "After cin.get(c); c = " << c << endl;
	
	return 0;
}
