/*
Author: Alberto Fernandez Saucedo
Program: Switch Structures

*/
#include <iostream>

using namespace std;

int main()
{
	// Showing effects of break statements
	
	int num; 
	
	cout << "Enter an integer between 0 and 7: ";
	cin >> num;
	cout << endl;
	
	cout << "The number you entered is: " << num << endl;
	
	switch(num)
	{
		case 0:
			
		case 1: cout << "Learning to use ";
		
		case 2: cout << "C++'s ";
		
		case 3: cout << "switch structure." << endl;
				break;
		
		case 4: break;
		
		case 5: cout << "This program shows the effect ";
		
		case 6: 
		
		case 7: cout << "of the break statement." << endl;
				break;
				
		default: cout << "The number is out of range." << endl;
	}
	
		cout << "Out of the first switch structure." << endl << endl;
	
	
		// More complex switch expression example
		int score;
		char grade;
		
		cout << "Enter a integer score between 0 and 100: " << endl;
		cin >> score;
		cout << endl; 
		
		cout << "You entered a score of " << score << endl;
		
		switch(score / 10)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
				
		    case 5: grade = 'F';
		    		break;
		    		
		    case 6: grade = 'D';
		    		break;
		    		
		    case 7: grade = 'C';
		    		break;
		    		
		    case 8: grade = 'B';
		    		break;
		    		
		    case 9:
		    case 10: grade = 'A';
		    		 break;
		    		 
		    default: cout << "Invaild test score." << endl;
		}
		
		cout << "The grade for the score of " << score 
			 << " is " << grade << "." << endl << endl;
	
	
	// switch expression to evaluate logical value (true/false, 0/1)
	
	cout << "Please enter your age (integer) :";

	int age;
	cin >> age;
	cout << endl;
	
	switch (age >= 18)
	{
		case 1: 
			cout << "Old enough to vote." << endl;
			cout << "Old enough to be drafted." << endl;
			break;
		
		case 0:
			cout << "Not old enough to vote." << endl;
			cout << "Not old enough to be drafted." << endl;
	}
	
	return 0;
}
