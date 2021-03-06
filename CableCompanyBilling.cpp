/*
Author: Alberto Fernandez Saucedo
Program Example: Cable Company Billing
Description: This programs calculates and prints a customer's bill for a 
local cable company. The program processes two types of customers:
residential and business.
*/

#include <iostream>
#include <iomanip>

using namespace std;

// Named constants for residential customers
const double RES_BILL_PROC_FEES = 4.50;
const double RES_BASIC_SERV_COST = 33.20;
const double RES_COST_PREM_CHANNEL = 9.99;

// Named constants for business customers
const double BUS_BILL_PROC_FEES = 25.00;
const double BUS_BASIC_SERV_COST = 65.00;
const double BUS_BASIC_CONN_COST = 5.00;
const double BUS_COST_PREM_CHANNEL = 35.00;

int main()
{
	// Declared variables
	int accountNumber;
	char customerType;
	int numOfPremChannels;
	int numOfBasicServConn;
	double amountDue;
	
	cout << fixed << showpoint;
	cout << setprecision(2);
	
	cout << "This program computes a cable bill." << endl;
	cout << "Enter account number (an integer): ";
	cin >> accountNumber;
	cout << endl;
	
	cout << "Enter customer type: "
		 << "R or r (Residential), "
		 << "B or b (Business): ";
	cin >> customerType;
	cout << endl;
	
	switch (customerType)
	{
		case 'r':
		case 'R':
			cout << "Enter the number of premium channels: ";
			cin >> numOfPremChannels;
			cout << endl;
			
			amountDue = RES_BILL_PROC_FEES
						+ RES_BASIC_SERV_COST
						+ numOfPremChannels *
						RES_COST_PREM_CHANNEL;
						
			cout << "Account number: " << accountNumber << endl;
			cout << "Amout due: $" << amountDue << endl;
			break;
			
		case 'b':
		case 'B':
			cout << "Enter the number of basic service connections: ";
			cin >> numOfBasicServConn;
			cout << endl;
			
			cout << "Enter the number of premium channels: ";
			cin >> numOfPremChannels;
			cout << endl;
			
			if (numOfBasicServConn <= 10)
				amountDue = BUS_BILL_PROC_FEES 
							+ BUS_BASIC_SERV_COST
							+ numOfPremChannels *
							BUS_COST_PREM_CHANNEL;
							
			else 
				amountDue = BUS_BILL_PROC_FEES
							+ BUS_BASIC_SERV_COST
							+ (numOfBasicServConn - 10) *
							BUS_BASIC_CONN_COST
							+ numOfPremChannels *
							BUS_COST_PREM_CHANNEL;
							
			cout << "Account number: " << accountNumber << endl;
			cout << "Ammount due: $" << amountDue << endl;
			break;
			
		default: 
			cout << "Invalid customer type." << endl;
	} 
	
	return 0; 
}
