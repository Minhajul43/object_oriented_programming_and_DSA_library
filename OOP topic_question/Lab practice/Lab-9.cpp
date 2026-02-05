/*
Design and implement a Banking System that manages customer accounts
with savings and loans using Friend Function, Inheritance and Virtual Base
Classes.
The system should:
1. Allow entry of multiple customers’ details.
2. Provide operations:
o Add new customer
o Deposit into savings account
o Calculate interest
o Calculate EMI for loans
o Display full account details
o Compare savings balances (friend function)
3. Use virtual inheritance for the Customer base class to avoid ambiguity.
4. Implement a menu-driven interface.
Class Design
1. Base Class: Customer
 Data Members:
o name
o customerID
 Member Function: displayCustomer()
2. Derived Class: SavingsAccount (virtual inheritance)
 Data Members:
o balance
o interestRate
 Member Functions:
o deposit()
o calculateInterest()
o displaySavings()
3. Derived Class: LoanAccount (virtual inheritance)
 Data Members:
o loanAmount
o EMI
 Member Functions:
o calculateEMI()
o displayLoan()
4. Final Derived Class: AccountHolder
 Member Functions:
o displayAllDetails()
 Friend Functions:
o compareSavings(AccountHolder&, AccountHolder&)
o generateLoanSummary(AccountHolder&)
UML Diagram (Text-based)
+----------------+
| Customer |
+----------------+
| - name |
| - customerID |
+----------------+
| + displayCustomer |
+----------------+
^ ^
(virtual) / \ (virtual)
/ \
+-------------------+ +-------------------+
| SavingsAccount | | LoanAccount |
+-------------------+ +-------------------+
| - balance | | - loanAmount |
| - interestRate | | - EMI |
+-------------------+ +-------------------+
| + deposit() | | + calculateEMI() |
| + calculateInterest| | + displayLoan() |
+-------------------+ +-------------------+
\ /
\ /
\ /
+----------------+
| AccountHolder |
+----------------+
| + displayAll |
| + friend: |
| compareSavings|
| + friend: |
| generateLoanSummary |
+----------------+
Sample Input/Output
===== Banking System Menu =====
1. Add New Customer
2. Deposit to Savings
3. Display Customer Details
4. Compare Savings Balances
5. Generate Loan Summary
6. Exit
Enter your choice: 1
Enter Customer ID: 301
Enter Name: Arif Hossain
Enter Initial Balance: 50000
Enter Interest Rate (e.g., 0.05): 0.04
Enter Loan Amount: 200000
Customer added successfully!
Enter your choice: 1
Enter Customer ID: 302
Enter Name: Farhana Akter
Enter Initial Balance: 75000
Enter Interest Rate (e.g., 0.05): 0.045
Enter Loan Amount: 150000
Customer added successfully!
Enter your choice: 2
Enter Customer ID: 301
Enter deposit amount: 10000
Deposited: 10000 | Total Balance: 60000
Enter your choice: 3
Enter Customer ID: 301
--- Account Details ---
Customer ID: 301
Name : Arif Hossain
Balance : 60000
Interest Rate: 4%
Loan Amount: 200000
EMI : 0
Calculated Interest: 2400
Enter your choice: 4
Enter 􀁀irst Customer ID: 301
Enter second Customer ID: 302
--- Comparing Savings Balances ---
Farhana Akter has higher balance (75000) than Arif Hossain (60000).
Enter your choice: 5
Enter Customer ID: 301
--- Loan Summary ---
Customer: Arif Hossain
Loan Amount: 200000
EMI (12 months): 16666.7
Enter your choice: 6
Exiting Banking System...
*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Customer {
  protected:
  string name;
  int customerID;
  public:
  void setCustomerDetails(int id, string nm){
    customerID = id;
    name = nm;
  }
  void displayCustomer(){
    cout<<"Customer ID: "<<customerID<<endl;
    cout<<"Name       :"<<name<<endl;
  }

};
class SavingsAccount : virtual public Customer{
  protected:
  float balance;
  float interestRate;
  public:
  void setCustomerDetails(int id, string nm, float bal, float rate){
    Customer::setCustomerDetails(id, nm);
    balance = bal;
    interestRate = rate;
  }
  void deposit(float amount){
    balance += amount;
    cout<<"Deposited :"<<amount<<" | Total Balance:"<< balance<<endl;
  }
  float calculateInterest(){
    return balance * interestRate;
  }
  void displaySavings(){
    cout<<"Balance       :"<<balance<<endl;
    cout<<"Interest Rate :"<<interestRate *100<<"%"<<endl;
  }
};
class LoanAccount : virtual public Customer{
  protected:
  float loanAmount;
  float EMI;  
  public:
  void setCustomerDetails(int id, string nm, float loanAmt){
    Customer::setCustomerDetails(id,nm);
    loanAmount = loanAmt;
    EMI =0;
  }
  void calculateEMI(int months){
   EMI = loanAmount / months;
  }
  void displayLoan(){
    cout<<"Loan Amount :"<<loanAmount<<endl;
    cout<<"EMI         :"<<EMI<<endl;
  }
};
class AccountHolder : public SavingsAccount, public LoanAccount{
 public:
 void setAccountHolderDetails(int id, string nm, float bal, float rate, float loanAmt){
   SavingsAccount::setCustomerDetails(id,nm,bal,rate);
   LoanAccount::setCustomerDetails(id,nm,loanAmt);
 }
  void displayAllDetails(){
    cout<<"---- Account Details ----"<<endl;
    Customer::displayCustomer();
    SavingsAccount::displaySavings();
    LoanAccount::displayLoan();
    cout<<"Calculated Interest:"<<calculateInterest()<<endl;
  }
  friend void compareSavings(AccountHolder& a1,AccountHolder& a2);
  friend void generateLoanSummary(AccountHolder& a);

};
void compareSavings(AccountHolder& a1,AccountHolder& a2){
  cout<<"--- Comparing Savings Balances----"<<endl;
  if(a1.balance >a2.balance){
    cout<<a1.name<<" has higher balance ("<<a1.balance<<") than "<<a2.name<<" ("<<a2.balance<<")."<<endl;
  }
  else if(a2.balance >a1.balance){
   cout<<a2.name<<" has higher balance ("<<a2.balance<<") than "<<a1.name<<" ("<<a1.balance<<")."<<endl;
  }
  else {
    cout<<"Both have equal balance ("<<a1.balance<<")."<<endl;
  }
}
void generateLoanSummary(AccountHolder& a){
  cout<<"----Loan Summary ----"<<endl;
  cout<<"Customer :"<<a.name<<endl;
  cout<<"Loan Amount :"<<a.loanAmount<<endl;
  a.calculateEMI(12);
  cout<<"EMI (12 months):"<<a.EMI<<endl;
}
int main(){
  vector<AccountHolder> customers;
  int choice;
  do{
    cout<<"-----Banking System Menu -----"<<endl;
    cout<<"1.Add New Customer"<<endl;
    cout<<"2.Deposit to Savings"<<endl;
    cout<<"3.Display Customer Details"<<endl;
    cout<<"4.Compare Saving Balances"<<endl;
    cout<<"5.Generate Loan Summary"<<endl;
    cout<<"6.Exit"<<endl;
    cout<<"Enter your  choice:";
    cin>>choice;
    switch(choice){
      
    }
  }
}
