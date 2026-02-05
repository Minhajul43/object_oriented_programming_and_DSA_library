#include<iostream>
using namespace std;
class Account{
  private:
  string accountHolder;
  int accountNumber;
  double balance;
  public:
  // default constructor
  Account(){
    accountHolder = "Unknown";
    accountNumber = 0;
    balance = 0.0;
  }
  // parameterzed constructor
  Account(string holder, int number, double initialbal){
    accountHolder = holder;
    accountNumber = number;
    balance = initialbal;
  }
  // deposit function (overloaded)
  void deposit(double amount){
    balance += amount;
    cout << "Deposited:" << amount <<"Successfully!"<<endl;
  }
  void deposit(double amount,string msssage){
    balance += amount;
    cout << "Deposited:"<< amount <<" Successfully! Message:"<<massage << endl;
  }
  // calculate yearly interest with default parameter
  void Interest( double rate =0.05){
    double interest = balance * rate;
    cout << "Yearly Interest at rate" << rate * 100 << "%:"<<interest <<endl;
  }
  // transfer money between two accounts
  void transfer(Account &receiver, double amount){
    if(balance >= amount){
      
    }
  }
}