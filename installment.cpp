#include <iostream>
#include <math.h>
using namespace std;

main()
{
	double amount, rate, total, ratecal, S1, S2, divide;
	int year;
	
	cout << "Installment calculator" << endl << endl;
	
	cout << "Loan Amount: ";
	cin >> amount;
	cout << endl;
	
	cout << "Loan Period(Year): ";
	cin >> year;
	cout << endl;
	
	cout << "Interest Rate:";
	cin >> rate;
	cout << endl << endl;

		
	rate = rate / 100;
	year = year * 12;
	
	ratecal = 1+rate;
	ratecal = pow(ratecal, year);
	S1 = rate * ratecal;
	S2 = ratecal - 1;
	divide = S1/ S2;
	total = amount * divide;
	
	cout << "Money need to pay per month: " << total << endl << endl;
	cout << "Total you paid: " << total * year;
	
	
}