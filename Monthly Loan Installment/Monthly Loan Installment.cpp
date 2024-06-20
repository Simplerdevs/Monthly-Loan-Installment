								
											/* Program to read a LoanAmount then ask For how many months do you want to pay? and calculate the  Monthly Loan Installment */
#include <iostream>
#include <cmath>
using namespace std;

int main()

{
	int Loan_Amount, Months;
	cout << "Enter  your Loan Amount " << endl;
	cin >> Loan_Amount;

	cout << "How many Months you need to settle the loan ? " << endl;
	cin >> Months;

	int Monthly_Installment = Loan_Amount / Months;

	cout << "You need to pay " << Monthly_Installment << " Dollars Every Month" << endl;


	return 0;

	// Created by @ilyes_Trabelsi
}
