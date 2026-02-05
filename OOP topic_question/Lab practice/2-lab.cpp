#include<iostream>
using namespace std;
class Employee{
  public:
  int id;
  string name;
  string department;
  double salary;

  void input(){
    cout<<"-----Enter the Employee Details------"<<endl;
    cout<<"Enter the Employee ID:";
    cin>>id;
    cin.ignore();
    cout<<"Enter the Employee Name:";
    getline(cin,name);
    cout<<"Enter the Employee Department:";
    getline(cin,department);
    cout<<"Enter the monthly salary:";
    cin>>salary;
  }

  double annualSalary(){
    return salary*12;
  }
  double bonus(){
    if(salary>5000){
      return salary*(.10);
    }
    else
    return salary*(.05);
  }
  void display(){
    cout<<"---------The Employee Details-------"<<endl;
    cout<<"The Employee ID            :"<<id<<endl;
    cout<<"The Employee Name          :"<<name<<endl;
    cout<<"The Employee Department    :"<<department<<endl;
    cout<<"The Employee Monthly Salary:"<<salary<<endl;
    cout<<"The AnnualSalary is        :"<<annualSalary()<<endl;
    cout<<"The Monthly Bonus is       :"<<bonus()<<endl;
  }
};

int main()
{
  Employee emp;
  emp.input();
  emp.display();
  return 0;
}