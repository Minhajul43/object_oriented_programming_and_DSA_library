#include<iostream>
#include<string>
using namespace std;
class Employee{
  private:
  string name;
  int employeeID;
  double BasicSalary;
  static int employeeCount;
  public:
  Employee(){
    name="Unknown";
    employeeID=0;
    BasicSalary=0.0;
    employeeCount++;
  }
  Employee(string empName, int empID, double BasicSal){
    name=empName;
    employeeID=empID;
    BasicSalary=BasicSal;
    employeeCount++;
  }
  double calculateGrossSalary(){
    double DA=BasicSalary*0.10;
    double HRA=BasicSalary*0.05;
    return BasicSalary + DA + HRA;
  }
  static int getEmployeeCount(){
    return employeeCount;
  }
  void display(){
    cout<<"Employee Name     :"<<name<<endl;
    cout<<"Employee ID       :"<<employeeID<<endl;
    cout<<"Basic Salary      :"<<BasicSalary<<endl;
    cout<<"Gross Salary      :"<<calculateGrossSalary()<<endl;
  }
  void input(){
    cin.ignore();
    cout<<"Enter Employee Name:";
    getline(cin,name);
    cout<<"Enter employee ID:";
    cin>>employeeID;
    cout<<"Enter Basic Salary :";
    cin>>BasicSalary;
  }
};
int Employee::employeeCount =0;
int main(){
  int n;
  cout<<"Enter the number of employees:";
  cin>>n;
  Employee* emp=new Employee[n];
  for(int i=0;i<n;i++){
    cout<<"----Enter Employee "<<(i+1)<<"details---"<<endl;
    emp[i].input();
  }
  cout<<"----Displaying Employee Details---"<<endl;
  for(int i=0;i<n;i++){
    cout<<"----Employee "<<(i+1)<<" details---"<<endl;
    emp[i].display();
  }
  cout<<"Total number of  Employees:"<<Employee::getEmployeeCount()<<endl;
  delete[] emp;
  return 0;
}