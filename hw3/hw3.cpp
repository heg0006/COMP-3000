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
cout << left << setw(10) << "Month" << left << setw(10) << "Balance" << left << setw(10) << "Payment" << left << setw(10) << "Rate" << left << setw(10)<< "Interest" << left << setw(10)<< "Principal" << endl;
cout << left << setw(10) << "0" << left << setw(5) << "$" << left << setw(1) << balance << left << setw(10) << "N/A" << left << setw(10) <<  "N/A" << left << setw(10) << "N/A" << left << setw(10) <<  "N/A" << endl;
while (balance > 0){
	if ((balance * monthlyRate + balance) > monthlyPayments){
		monthlyInterest = balance * monthlyRate;
		totalInterest = totalInterest + monthlyInterest;
		principal = monthlyPayments - monthlyInterest;
		balance = balance - principal;
		if (month < 10){
			cout << left << setw(10) <<  month << left << setw(5) <<  "$" << left << setw(1)<< balance << left << setw(10) << "$" << left << setw(1) << monthlyPayments << left << setw(10) << monthlyRate * 100 << left << setw(10) << "$" << left << setw(1) << monthlyInterest << left << setw(10) <<  "$" << left << setw(1)<< principal << endl;
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
