//author Namw:Liew Eden
//Student ID:22/23S1-2345DIT
//Course:Diploma In Information Technology

#include <iostream>

using namespace std;

int main() {
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