#include<iostream>
using namespace std;
class account{
  private:
  double money;
  public:
  string name;
  double accnumber;
// copy constructor!!
  account(double money,string name,double accnumber){
   this-> money =money;
   this-> name=name;
    this->accnumber=accnumber;
  }

// custom copy constructor
account (account &n){
  cout<< "Hi i am custom copy constructor";
  this->money=&n.money;
  this->name=&n.name;
  this->accnumber=&n.accnumber;
}

  void display(){
    cout<<"Money            :"<<money<<endl;
    cout<<"Name             :"<<name<<endl;
    cout<<"account number   :"<<name<<endl;
  }
};
  int main()
  {
    account n1(25000,"Minhajul",100002043);
    // n1.display();
    account n2(n1);// copy constructor!!
    n2.display();

    return 0;

  }
  
  

