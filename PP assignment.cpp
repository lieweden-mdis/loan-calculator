//Group Member list
//Group 2
//Liew Eden || 22/23S1-2345DIT
//Tai Ji Heng || 22/23S1-2352DIT
//Kow Yu Heng || 22/23S1-2341DIT
//Seow You Fook || 22/23S1-2351DIT
//Velkein Lim Wei Hang || 22/23S1-2369DITDM
//Lau Zhe Kai || 22/23S1-2342DIT

//Title:Banking Calculator

//===================================================================================

//code start

#include <iostream>

#include <math.h>

#include <iomanip>

using namespace std;

//Function Mention
void personal_loan(int);
void car_loan(int);
void interest(int);
void installment(int);

main() {
    int selection;

    cout << endl;

    cout << "Select function" << endl;
    cout << endl;

    //function index

    cout << "1.Personal Loan" << endl;
    cout << "2.Car Loan" << endl;
    cout << "3.interest" << endl;
    cout << "4.installment" << endl;

    cout << endl;

    cout << "Please enter the function number: ";

    cin >> selection;

    cout << endl << endl;

    //personal_loan
    if (selection == 1) 
	{
        personal_loan(selection);
    }

    //house_loan
    else if (selection == 2) 
	{
        car_loan(selection);
    }

    //Interest
    else if (selection == 3) 
	{
        interest(selection);
    }

    //installment
    else if (selection == 4)
	{
        installment(selection);
    } 
	
	else 
	{
        cout << "invalid funtion";
    }
}

//Author: Kow Yu Heng
//Personal Loan

void personal_loan(int selection) 
{
    double amount, month, year, rate, interest, interest_m, monthlyinterest, monthlyinterest2, monthlypayment, monthlypayment2;

    cout << "PERSONAL LOAN CALCULATOR" << "\n";
    cout << "\n";

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

    interest = (rate / 100) * amount * year;
    interest_m = (rate / 100) * amount * (year + (month / 12));

    if (month > 0) 
	{
        cout << fixed << setprecision(2);
        cout << "The Total interest= RM" << interest_m << "\n";
    } 
	
	else 
	{
        cout << fixed << setprecision(2);
        cout << "The Total interest= RM" << interest << "\n";
    }

    monthlyinterest = interest / (year * 12);
    monthlyinterest2 = interest_m / (month + (year * 12));

    if (month > 0) 
	{
        cout << "The Monthly Interest= RM " << monthlyinterest2 << "\n";
    } 
	
	else 
	{
        cout << "The Monthly Interest= RM " << monthlyinterest << "\n";
    }

    monthlypayment = (amount + interest) / (year * 12);
    monthlypayment2 = (amount + interest_m) / (month + (year * 12));

    if (month > 0) 
	{
        cout << "The Monthly Payment= RM " << monthlypayment2 << "\n";
    } 
	
	else 
	{
        cout << setprecision(2);
        cout << "The Monthly Payment= RM " << monthlypayment << "\n";
    }

}

//end personal loan

//Author:lau Zhe Kai
//Car Loan

void car_loan(int selection) 
{
    double amount, year, rate, interest, monthlyinterest, monthlyinstallment;

    cout << "CAR LOAN CALCULATOR " << endl << endl;

    //data input
    cout << "Loan Amount(RM):";
    cin >> amount;
    cout << endl;

    cout << "Loan Period(Year): ";
    cin >> year;
    cout << endl;

    cout << "Interest Rate(%.):";
    cin >> rate;
    cout << endl << endl;

    //formula
    interest = (rate / 100) * amount * year;
    monthlyinterest = interest / (year * 12);
    monthlyinstallment = (amount + interest) / (year * 12);

    cout << "Your total interest= RM  " << interest << endl;
    cout << "Your monthly interest= RM  " << monthlyinterest << endl;
    cout << "Your monthly installment= RM  " << monthlyinstallment << endl;
}

//End Car Loan

//Author:Liew Eden
//Interest

void interest(int selection) 
{
    double loan_amount;
    int loan_term;
    int interest_rate;
    double interest;

    cout << "Loan Interest Calculator" << endl;
    cout << endl;

    //Data input	
    cout << "Loan Amount : ";
    cin >> loan_amount;
    cout << endl;

    cout << "Loan Term(In Years) : ";
    cin >> loan_term;
    cout << endl;

    cout << "Interest Rate(In Years) : ";
    cin >> interest_rate;
    cout << endl;

    //Formula
    interest = loan_amount * (double(interest_rate) / 100) * loan_term;

    cout << "Total Interest : " << "RM" << interest;
}

//End Interest

//Author:Velkein Lim Wei Hang
//Installment

void installment(int selection) 
{
    double amount, rate, total, ratecal, S1, S2, divide, year;

    cout << "Installment Calculator" << endl << endl;

    //data input
    cout << "Loan Amount: RM";
    cin >> amount;
    cout << endl;

    cout << "Loan Period(Year): ";
    cin >> year;
    cout << endl;

    cout << "Interest Rate(%):";
    cin >> rate;
    cout << endl << endl;

    //Formula
    rate = rate / 100;
    year = year * 12;

    ratecal = 1 + rate;
    ratecal = pow(ratecal, year);
    S1 = rate * ratecal;
    S2 = ratecal - 1;
    divide = S1 / S2;
    total = amount * divide;

    cout << "Money need to pay per month: $" << total << endl << endl;
    cout << "Total you paid: $" << total * year;
}

//End Installment