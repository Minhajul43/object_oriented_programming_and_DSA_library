/*
Create a C++ program to store and manage salary details of employees. Each employee has:
Name
Employee ID
Basic Salary
The program should:
Use a class Employee with:
a) A constructor to initialize data
b) A static data member to count the total number of employees
c) A function to calculate gross salary (Basic + 10% DA + 5% HRA)
d) A function to display employee information
e) Use an array of Employee objects.
f) Display the total number of employees using the static member.
Requirements Summary:
Use a parameterized constructor to initialize objects.
Use an array to store multiple Employee records.
Use a static member to track total employees created.
Use functions to:
Calculate Gross Salary
Display Employee details*/

#include<iostream>
#include<string>   // called library for string operations
using namespace std;
class Employee{  // created class Employee
  private:
  string name;
  int employeeID;
  double BasicSalary;
  static int employeeCount;
  public:
  Employee(){  // initializing default constructor.
    name="unknown";
    employeeID=0;
    BasicSalary=0.0;
    employeeCount++;
  }
  Employee(string empName, int empID, double BasicSal){ //parameterized
    name=empName;
    employeeID=empID;
    BasicSalary=BasicSal;
    employeeCount++;
  }
  double calculateGrossSalary(){ // function to calculate gross salary
    double DA=0.10*BasicSalary;
    double  HRA=0.05*BasicSalary;
    return BasicSalary + DA + HRA;
  }
  void displayEmployee(){  // function to display employee information
    cout<<"Employee Name   :"<<name<<endl;
    cout<<"Employee ID     :"<<employeeID<<endl;
    cout<<"Basic Salary    :"<<BasicSalary<<endl;
    cout<<"Gross Salary    :"<<calculateGrossSalary()<<endl;
  }
  static int getEmployeeCount(){  // function to get total number of employees
    return employeeCount;
  }
  void inputEmployee(){ // function to input employee details.
    cin.ignore();
    cout<<"Enter the employee name:";
    getline(cin,name);
    cout<<"Enter the employee ID:";
    cin>>employeeID;
    cout<<"Enter the basic salary:";
    cin>> BasicSalary;
  }
};
int Employee::employeeCount = 0; // initializing static member 
int main(){
  int n;
  cout<<"Enter the number of employees:";
  cin>>n;
  Employee* employees = new Employee[n]; // dynamic array of Employee objects
  for(int i=0;i<n;i++){
      cout<<"-----Enter Employee "<<(i+1)<<" details:------"<<endl;
      employees[i].inputEmployee(); // Initialize each employee
  }
  cout<<"-------Displaying Employee Details-------"<<endl;
  for(int i=0;i<n;i++){
    cout<<"----Employee "<<(i+1)<<" Details:----"<<endl;
    employees[i].displayEmployee();
  }
  cout<<"Total number of employees :"<<Employee::getEmployeeCount()<<endl;
  
  delete[] employees; // free dynamically allocated memory
  return 0;
}

