/*
Author: Alberto Fernandez Saucedo
Program Exercise: Reading data from a file containing student names 
and their test scores. Ouputs each student's name followed by the test
score and the grade. The program outputs average test score for all
the students.

NOTE: This program uses stData.txt to read information and outputs stData.out

*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{
	// Variable declaration
	string firstName;
	string lastName;
	double testScore;
	char grade = ' ';
	double sum = 0;
	int count = 0;
	
	// Stream variable declaration
	ifstream inFile;
	ofstream outFile;
	
	// Open input file
	inFile.open("stData.txt");
	
	if (!inFile)
	{
		cout << "Cannot open input file."
			 << " Program terminates!" << endl;
			 return 1;
	}
	
	// Open output file
	outFile.open("stData.out");
	
	outFile << fixed << showpoint << setprecision(2);
	
	inFile >> firstName >> lastName; // read the name
	inFile >> testScore; // read the test score
	
	while(inFile)
	{
		sum = sum + testScore; // update sum
		count++; // increment count
		
		// determine the grade
		switch(static_cast<int> (testScore) / 10)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
				grade = 'F';
				break;
				
			case 6:
				grade = 'D';
				break;
				
			case 7:
				grade = 'C';
				break;
				
			case 8: 
				grade = 'B';
				break;
				
			case 9:
			case 10:
				grade = 'A';
				break;
				
			default:
				cout << "Invaild score." << endl;
				
		} // end switch
		
		outFile << left << setw(12) << firstName
				<< setw(12) << lastName
				<< right << setw(4) << testScore
				<< setw(2) << grade << endl;
				
		inFile >> firstName >> lastName;
		inFile >> testScore;
		
	} // end while
	
	outFile << endl;
	
	if (count != 0)
		outFile << "Class Average: " << sum / count << endl;
	else
		outFile << "No data." << endl;
		
	inFile.close();
	outFile.close();
	
	return 0;
	
}
