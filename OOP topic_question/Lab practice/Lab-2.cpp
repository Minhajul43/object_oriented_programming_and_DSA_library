/*
Basic C++
1. Write a C program to compute the perimeter and area of a circle with a givenradius.

2. Write a program that converts Centigrade to Fahrenheit.

3. Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

4. Write a C program that accepts two item's weight and number of purchases(floating point values) and calculates their average value.

Object Oriented C++
5. Design and implement a C++ program that simulates the management of
employee information in an organization. You are required to define a class
named Employee that contains the following private data members:
 int id — Employee ID
 string name — Employee Name
 string department — Department Name
 float salary — Monthly Salary
The class should include the following member functions:
 void input() — to take input for employee details
 void display() — to display the employee details
 float annualSalary() — to calculate and return the annual salary
 void bonus() — to print the bonus amount:
o 10% of salary for salary > 50,000
o 5% of salary otherwise
Declare an object of the Employee class, gather data from the user, and display the
information, annual salary, and bonus for the employee.
Use cin.ignore() before getline() after reading integers or floats.*/

// Question no.1
/*
#include<iostream>
using namespace std;
const float PI=3.1416;
int main(){
  float radius, perimeter ,area;
  cout<<"Enter the radius of the circle:";
  cin>>radius;
  perimeter=2*PI*radius;
  area=PI*radius*radius;
  cout<<"The perimeter of the circle is :"<<perimeter<<endl;
  cout<<"The area of the circle is:"<<area<<endl;
  return 0;
}
  */

// Question no.2
/*
#include<iostream>
using namespace std;
int main(){
  float Centigrade,Fahrenheit;
  cout<<"Enter temperature in Centigrade:";
  cin>>Centigrade;
  Fahrenheit=((9*Centigrade)/5)+32;
  cout<<"The temperature in Fahrenheit is :"<<Fahrenheit<<endl;
  return 0;
}
  */

// Question no.3
/*
#include<iostream>
using namespace std;
int main(){
  int Totalsenconds ,minutes, hours,seconds;
  cout<<"Enter time in seconds:";
  cin>>Totalsenconds;
  hours=Totalsenconds/3600;
  minutes=(Totalsenconds%3600)/60;
  seconds=Totalsenconds%60;
  cout<<"The time is:"<<hours <<":"<<minutes<<":"<<seconds<<endl;
  return 0;
 }
  */

// Question no.4
/*
#include<iostream>
using namespace std;
int main(){
  int weight1,weight2;
  float number1,number2, average;
  cout<<"Etner the weight of first item:";
  cin>>weight1;
  cout<<"Enter the number of purchases of first item:";
  cin>>number1;
  cout<<"Enter the weight of second item:";
  cin>>weight2;
  cout<<"Enter the number of purchases of second item:";
  cin>>number2;
  average=(weight1*number1 + weight2*number2)/(number1+number2);
  cout<<"The average value is :"<<average<<endl;
  return 0;
}
*/
// Question no.5
#include<iostream>
#include<string>
using namespace std;
class Employee{
  public:
  int id;
  string name;
  string department;
  float salary;
  
  void input(){
    cout<< "Enter Employee ID:";
    cin>>id;
    cin.ignore();
    cout<<"Enter Employee Name:";
    getline(cin,name);
    cout<<"Enter Departments Name:";
    getline(cin,department);
    cout<<"Enter Monthly Salary:";
    cin>>salary;
  }
  void display(){
    cout<<"Employee ID        :"<<id<<endl;
    cout<<"Employee   Name    :"<<name<<endl;
    cout<<"Employee Department:"<<department<<endl;
    cout<< "Monthly Salary    :"<<salary<<endl;
  }
  float annualSalary(){
    return salary*12;
  }
  void bonus(){
    if(salary>50000){
      cout<<"Bonus Amount is:"<<salary*0.10<<endl;
    }
    else{
      cout<<"Bonus Amount is:"<<salary*0.05<<endl;
    }
  }

};
int main(){
  Employee emp;
  cout<<"------Enter Employee details------"<<endl;
  emp.input();
  cout<<"-------Employee details-------"<<endl;
  emp.display();
  cout<<"Annual Salary is :"<<emp.annualSalary()<<endl;
  cout<<"Bonus Details:"<<endl;
  emp.bonus();
  return 0;
}

