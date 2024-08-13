#include <iostream>
#include <math.h>
using namespace std;

main()
{
	double amount,year,rate,interest,monthlyinterest,monthlyinstallment;
	
	cout << "CAR LOAN CALCULATOR "<<endl<<endl;
	
	cout << "Loan Amount(RM):";
	cin >> amount;
	cout << endl;
	
	cout << "Loan Period(Year): ";
	cin >> year;
	cout << endl;
	
	cout << "Interest Rate(%.):";
	cin >> rate;
	cout << endl << endl;
	
    interest=(rate/100)*amount*year;
	monthlyinterest=interest/(year*12);
	monthlyinstallment=(amount+interest)/(year*12);
	
	cout << "Your total interest= RM " << interest << endl; 
	cout << "Your monthly interest= RM " << monthlyinterest << endl;
	cout << "Your monthly installment= RM " << monthlyinstallment << endl;
}
