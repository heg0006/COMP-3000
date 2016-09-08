//Name: Hannah Gladish
//filename: hw3.cpp
//Development Environment: vim, g++, Linux
//Compile: g++ -o hw3 hw3.cpp
//Sample usage: ./hw3


#include <iostream> 
#include <math.h>
#include <iomanip>

using namespace std;

int main(){
double loanAmount = 0.0;
double interestRate = 0.0;
double monthlyPayments = 0.0;
double monthlyRate = 0.0;
double balance = 0.0;
double monthlyInterest = 0.0;
double totalInterest = 0.0;
double principal = 0.0;
int month = 1;
double lastPayment = 0.0;

cout << "Loan Amount: ";
cin >> loanAmount;
cout << "Interest Rate (% per year): ";
cin >> interestRate;
cout << "Monthly Payments: ";
cin >> monthlyPayments;

monthlyRate = (interestRate / 12)/100;
balance = loanAmount;

cout << "*****************************************************************" << endl;
cout << "		Amortization Table" << endl;
cout << "*****************************************************************" << endl;
cout << "Month" << setw(10) << "Balance" << setw(10) << "Payment" << setw(10) << "Rate" << setw(10) << "Interest" << setw(10) << "Principal" << endl;
cout << "0" << setw(10) << "$" << balance << setw(10) << "N/A" << setw(10) <<  "N/A" << setw(10) << "N/A" << setw(10) <<  "N/A" << endl;
while (balance > 0){
	if ((balance * monthlyRate + balance) > monthlyPayments){
		monthlyInterest = balance * monthlyRate;
		totalInterest = totalInterest + monthlyInterest;
		principal = monthlyPayments - monthlyInterest;
		balance = balance - principal;
		if (month < 10){
			cout <<  month << setw(10) <<  "$" << balance << setw(10) << "$" << monthlyPayments << setw(10) << monthlyRate * 100 << setw(10) << "$" << monthlyInterest << setw(10) <<  "$" << principal << endl;
	}
		else{
			cout << month << setw(9) << "$" << balance << setw(9) << "$" << monthlyPayments << setw(9) << monthlyRate * 100 << setw(9) << "$" << monthlyInterest << setw(9) << "$" << principal << endl;
}
		month = month + 1;
	}
	else {
		monthlyInterest = balance * monthlyRate;
		totalInterest = totalInterest + monthlyInterest;
		lastPayment = monthlyInterest + balance;
		balance = 0;
		cout <<  month << setw(9) <<  "$" << balance << setw(9) << "$" << monthlyPayments << setw(9) << monthlyRate * 100 << setw(9) <<  "$" << monthlyInterest << setw(9) << "$" << principal << endl;
	}
}
cout << "*****************************************************************" << endl;
cout << "Itt takes " << month << " months to pay off the loan." << endl;
cout << "Total interest paid is: $" << totalInterest << endl;
return 0;
}
