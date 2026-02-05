// Design and implement a Banking System that manages customer accounts using Inheritance and Virtual Base Classes in C++.

// The program contains the following classes:

// Base class: Customer

// o Data members: name, customerID.

// o Function: displayCustomer().

// Derived class: SavingsAccount (inherits from Customer)

// o Data members: balance, interestRate.

// o Functions: deposit(), calculateInterest().

// Derived class: LoanAccount (inherits from Customer)

// o Data members: loanAmount, EMI.

// o Functions: calculateEMI().

// Final class: AccountHolder (inherits from both SavingsAccount and LoanAccount)

// o Must use virtual inheritance for Customer to avoid ambiguity.

// o Function: displayAllDetails() to show full account information.

// In the main function perform the following operations to check the implementation of the below functionalities:

// 1. Create an AccountHolder object.

// 2. Accept input for customer, savings, and loan details.

// 3. Call deposit, interest calculation, EMI calculation.

// 4. Display all details.

#include<iostream>
#include<string>
using namespace std;
class Customer{
  string name;
  int customerID;
  public:
  void inputCustomer(){
    cout<<"Enter the customer name:";
    getline(cin,name);
    cin.ignore();
    cout<<"Enter the customerID:";
    cin>>customerID;
    
  }
 void displayCustomer(){
  cout<<"The customer name is:"<<name<<endl;
  cout<<"The customer ID is:"<<customerID<<endl;

 }
};
class SavingAccout:virtual public Customer{
   public:
  double balance;
  double interestRate;
 
  void inputSaving(){
    cout<<"Enter the balance:";
    cin>>balance;
    cout<<"Enter the inerest rate:";
    cin>>interestRate;
  }
  void deposit(double amount){
    if(amount>0){
      balance+=amount;
      cout<<"Amount deposited successfully. New balance:"<<balance<<endl;

    }
    else{
      cout<<"Invalid deposit amount"<<endl;
    }

  }
  void calculateInterest(){
  double interest = balance*interestRate/100;
  cout<<"The interest on the balance is:"<<interest<<endl;
 } 
};
class LoanAccount:virtual public Customer{
  public:
  double LoanAccount;
  double EMI;
  
  void inputLoan(){
    cout<<"Enter the loan amount:";
    cin>>LoanAccount;
    cout<<"Enter the EMI amount:";
    cin>>EMI;
}
void calculateEMI(int months){
  if(months>0){
    double totalEMI =EMI*months;
    cout<<"The total EMI for"<<months<<" months is:"<<totalEMI<<endl;

  }
  else{
    cout<<"Invalid number of months"<<endl;
  }
}
};
class AccountHolder:public SavingAccout,public LoanAccount{
  public:
  void displayAllDetails(){
    displayCustomer();
    cout<<"Account Details:"<<endl;
    cout<<"Balance:"<<balance<<endl;
    cout<<"Interest Rate:"<<interestRate<<endl;
    cout<<"Loan Amount:"<<LoanAccount<<endl;
    cout<<"EMI:"<<EMI<<endl;
  }

};
// input from the user and display all details
int main(){
  AccountHolder acc1;
  acc1.inputCustomer();
  acc1.inputSaving();
  acc1.inputLoan();
  acc1.deposit(5000);
  acc1.calculateInterest();
  acc1.calculateEMI(12);
  acc1.displayAllDetails();
  return 0;
}

