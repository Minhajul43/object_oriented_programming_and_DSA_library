#include<iostream>
#include<string>
using namespace std;
class Employee{
  public:
  int id;
  string name;
  string department;
  float salary;

   void intput(){
    cout<<"Enter the employee ID:";
    cin>>id;
    cin.ignore();
    cout<<"Enter the Employee Name:";
    getline(cin,name);
    cout<<"Enter the Department Name:";
    getline(cin,department);
    cout<<"Enter the Salary:";
    cin>>salary;
   }

   void display(){
    cout<<"Employee ID             :"<<id<<endl;
    cout<<"Employee Name           :"<<name<<endl;
    cout<<"Employee Department     :"<<department<<endl;
    cout<<"Employee Monthly Salary :"<<salary<<endl;
   }
   float annualSalary(){
    return salary*12;
   }
   void bonus(){
    if(salary>50000){
      cout<<"The bonus Amount:"<<salary*0.10<<endl;
    }
    else {
      cout<<"The bonus Amount:"<<salary*0.05<<endl;
    }
   }

};
int main()
{
  Employee emp;
  emp.input();
  emp.display();
  cout<<"The Annual Salary is:"<<emp.annualSalary()<<endl;
  cout<<"The Bonus Amount is :"<<emp.bonus()<<endl;
  return 0;
}