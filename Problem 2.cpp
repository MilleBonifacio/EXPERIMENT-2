#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	float UnpaidBal, Bill, Gallon, PenaltyBill;
	
	cout << "Enter Water Consumption in Gallons" << endl;
	cin >> Gallon;
	Bill = (Gallon * 1.10) + 35;
	cout << "Enter Unpaid Balance. if none, enter 0" << endl;
	cin >> UnpaidBal;
	
	PenaltyBill = Bill + 20;
	
	if (UnpaidBal>0)
	cout << PenaltyBill << "Php Balance to be paid" << endl;
	
	else if (UnpaidBal==0)
	
	cout << Bill << "Php Balance to be paid" << endl;
	
	else 
	
	cout << "Invalid Input" << endl;
	return 0;
}
