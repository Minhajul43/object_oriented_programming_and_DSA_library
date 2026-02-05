/*
Create a C++ program to manage bank accounts and calculate interest for
customers.
Each BankAccount should store:
 Account holder name
 Account number
 Balance
Your program should allow:
1. Creation of Objects through Constructors (Default and Parameterized)
2. Depositing money (overloaded: with just amount OR with amount +
message).
3. Calculating yearly interest with a default interest rate (default = 5%).
4. Transferring money between accounts (passing objects as function
arguments).
5. Displaying account details using an inline function.
*/
#include <iostream>
#include<string>
using namespace std;
class BankAccount {
  private:
  string  accountHolderName;
  int accountNumber;
  double Balance;
  public:
  BankAccount(){
    accountHolderName ="Unknown";
    accountNumber =0;
    Balance =0.0;
  }
  BankAccount(string name,int accNum,double bal){
    accountHolderName =name;
    accountNumber =accNum;
    Balance =bal;
  }
  void deposit(double amount){
    Balance +=amount;
  }
  void yearlyinterest(double rate =0.05){
    Balance +=Balance*rate;

  }
  void Transfer(int amount,BankAccount &acc){
    if(Balance >=amount){
      Balance -=amount;
      acc.Balance +=amount;
      cout<< "Transfer successful."<<endl;
    }
    else{
      cout<<"Insufficient balance for transfer."<<endl;
    }

  }
  inline void displayAccountDetails(){
    cout<<"Account Holder Name:"<<accountHolderName<<endl;
    cout<<"Account Numer:"<<accountNumber<<endl;
    cout<<"Balance:"<<Balance<<endl;
  }
};// end of class 

 // user difined main function
int main(){
  BankAccount acc1("Minhajul",1001,5000.0);
 BankAccount acc2("Neha",1003,20000.0); 
 acc1.displayAccountDetails();
 acc1.deposit(2000.0);
 acc1.yearlyinterest();
 acc1.displayAccountDetails();
 acc1.Transfer(1000.0,acc2);
 acc1.displayAccountDetails();
 acc2.displayAccountDetails();
 return 0;
}
