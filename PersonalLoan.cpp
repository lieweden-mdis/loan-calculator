#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

main()
{
	double amount,month,year,rate,interest,interest_m,monthlyinterest,monthlyinterest2,monthlypayment,monthlypayment2;
	
	cout << "PERSONAL LOAN CALCULATOR"<<"\n";
	cout <<"\n";
	
	cout << "The Amount You Want To Loan-(RM):";
	cin >> amount;
	cout << "\n";
	
	cout << "Loan Period-(Year):";
	cin >> year;
	cout << "\n";
	
	cout << "Loan Period-(Month):";
	cin >> month;
	cout << "\n";
	
	cout << "Annual Interest Rate-(%):";
	cin >> rate;
	cout << "\n";
	cout << "\n";
	
    interest=(rate/100)*amount*year;
    interest_m=(rate/100)*amount*(year+(month/12));
	if (month>0)
	{
		cout << fixed << setprecision(2);
		cout << "The Total interest= RM" << interest_m << "\n";
	}
	else
	{
		cout << fixed << setprecision(2);
		cout << "The Total interest= RM" << interest <<"\n";
    }
	monthlyinterest=interest/(year*12);
	monthlyinterest2=interest_m/(month+(year*12));
	if (month>0)
	{
		cout << "The Monthly Interest= RM " << monthlyinterest2 << "\n";	
	}
	else
	{
		cout << "The Monthly Interest= RM " << monthlyinterest << "\n";
	}
	monthlypayment=(amount+interest)/(year*12);
	monthlypayment2=(amount+interest_m)/(month+(year*12));
	if (month>0)
	{
		cout << fixed << setprecision(2);
		cout << "The Monthly Payment= RM " << monthlypayment2 << "\n";
	}
	else
	{
	    cout << setprecision(2);
	    cout << "The Monthly Payment= RM " << monthlypayment <<"\n";
    }
}
