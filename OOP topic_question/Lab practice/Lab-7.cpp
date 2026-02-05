/*
Design and implement a Banking System that manages customer accounts using Inheritance and Virtual Base Classes in C++.
The program contains the following classes:
● Base class: Customer
o Data members: name, customerID.
o Function: displayCustomer().
● Derived class: SavingsAccount (inherits from Customer)
o Data members: balance, interestRate.
o Functions: deposit(), calculateInterest().
● Derived class: LoanAccount (inherits from Customer)
o Data members: loanAmount, EMI.
o Functions: calculateEMI().
● Final class: AccountHolder (inherits from both SavingsAccount and LoanAccount)
o Must use virtual inheritance for Customer to avoid ambiguity.
o Function: displayAllDetails() to show full account information.
In the main function perform the following operations to check the implementation of the below functionalities:
1. Create an AccountHolder object.
2. Accept input for customer, savings, and loan details.
3. Call deposit, interest calculation, EMI calculation.
4. Display all details.
*/
#include <iostream>
#include <string>
using namespace std;
class Customer {// Base class for customer details
  public:
  string name;
  int customerID;
  void displayCustomer(){  // Function to display customer details
    cout<<"Customer Name: "<<name<<endl;
    cout<<"Customer ID  : "<<customerID<<endl;
  }
};
class SavingsAccount :virtual public Customer { // Derived class for savings account 
  public:
  double balance;
  double interestRate;
  void deposit(double amount){ // Function to deposit money 
    balance +=amount;
  }
  void calculateInterest(){ // Function to calculate interest 
    double interest = balance * interestRate /100;
    balance +=interest;
    cout<<"Interest of "<<interest<<" added.New balance:"<<balance<<endl;
  }

};
class LoanAccount :virtual public Customer { // Derived class for loan account 
  public:
  double LoanAccount;
  double EMI;
  void calculateEMI(int months){// Function to calculate EMI
    EMI = LoanAccount/months;
    cout<<"--- EMI Calculation for Every Month ---"<<endl;
    cout<<"EMI for "<<months<<" months is :"<<EMI<<endl;
  }

};
// Final class inheriting from both SavingAccount and LoanAccount
class AccountHolder :public SavingsAccount,public LoanAccount {
  public:
  void displayAllDetails(){  // Function to display all account details
    cout<<"---- Account Holder Details ----"<<endl;
    displayCustomer();
    cout<<"Balance      : "<<balance<<endl;
    cout<<"Interest Rate:"<<interestRate<<"%"<<endl;
    cout<<"Loan Amount  :"<<LoanAccount<<endl;
    cout<<"EMI          :"<<EMI<<endl;
  }

};
int main(){
  AccountHolder accHolder;
  // input customer details
  cout<<"Enter Customer Name:";
  getline(cin,accHolder.name);
  cin.ignore();
  cout<<"Enter Customer ID:";
  cin>>accHolder.customerID;

  // input savings account details

  cout<<"Enter initial balance for Savings Account:";
  cin>>accHolder.balance;
  cout<<"Enter interest rate(%):";
  cin>>accHolder.interestRate;

  // input loan account details

  cout<<"Enter loan amount for Loan Account:";
  cin>>accHolder.LoanAccount;

  // perform operations 

  cout<<"Entering deposit for Savings Account:";
  double depositAmount;
  cin>>depositAmount;
  accHolder.deposit(depositAmount);
  accHolder.calculateInterest();
  int emiMonths;
  cout<<"Enter number of months to calculate EMI:";
  cin>>emiMonths;
  accHolder.calculateEMI(emiMonths);
  // display all details
  accHolder.displayAllDetails();
  return 0;
}
