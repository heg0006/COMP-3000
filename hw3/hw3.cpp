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

if((balance * monthlyRate) > monthlyPayments){
cout << "You will never pay off your loan." << endl;
}
else{

cout << "*****************************************************************" << endl;
cout << "		Amortization Table" << endl;
cout << "*****************************************************************" << endl;
cout << "Month" << setw(10) << "Balance" << setw(15) << "Payment" << setw(9) << "Rate" << setw(15) << "Interest" << setw(10) << "Principal" << endl;
cout << "0" << setw(9) << "$" << balance << setw(12) << "N/A" << setw(6) <<  "N/A" << setw(15) << "N/A" << setw(10) <<  "N/A" << endl;
while (balance > 0){
	if ((balance * monthlyRate + balance) > monthlyPayments){
		monthlyInterest = balance * monthlyRate;
		totalInterest = totalInterest + monthlyInterest;
		principal = monthlyPayments - monthlyInterest;
		balance = balance - principal;
		if (month < 10){
			cout <<  month << setw(9) <<  "$" << balance << setw(14) << "$" << monthlyPayments << setw(9) << monthlyRate * 100 << setw(14) << "$" << monthlyInterest << setw(9) <<  "$" << principal << endl;
	}
		else{
			cout << month << setw(8) << "$" << balance << setw(13) << "$" << monthlyPayments << setw(8) << monthlyRate * 100 << setw(13) << "$" << monthlyInterest << setw(8) << "$" << principal << endl;
}
		month = month + 1;
	}
	else {
		monthlyInterest = balance * monthlyRate;
		totalInterest = totalInterest + monthlyInterest;
		principal = balance;
		lastPayment = principal + monthlyInterest;
		balance = 0;
		cout <<  month << setw(9) <<  "$" << balance << setw(9) << "$" << lastPayment  << setw(9) << monthlyRate * 100 << setw(9) <<  "$" << monthlyInterest << setw(9) << "$" << principal << endl;
	}
}
cout << "*****************************************************************" << endl;
cout << "It takes " << month << " months to pay off the loan." << endl;
cout << "Total interest paid is: $" << totalInterest << endl;
return 0;
}
}
