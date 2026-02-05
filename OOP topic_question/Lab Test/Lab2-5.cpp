// Now Iam creating a class called "Employee Management System" that contain id,name,department and salary of an employee and also calculate the bonus based on the salary.Now start coding:
#include<iostream>
#include<string>
using namespace std;
class EmployeeManagementSystem{
  private:
  int id;
  string name;
  string department;
  double salary;
  public:
  // Function ot take employee input
  void input(){
    cout << "Enter Employee ID: ";
    cin >>id;
    cin.ignore();//To ignore the newline character left in the input buffer
    cout << "Enter Employee Name: ";
    getline(cin,name);
    cout << "Enter Employee Department: ";
    getline(cin,department);
    cout << "Enter Employee Salary: ";
    cin >> salary;
   }
    // Function to display employee details
    void display(){
      cout << "Employee ID           : "<< id <<endl;
      cout << "Empplyee Name         :"<<name <<endl;
      cout << "Employee Department   : "<< department <<endl;
      cout << "Employee Salary       : "<< salary <<"TK" <<endl;
    }
    //Function to calculate annual salary
    double annualSalary(){
      return salary* 12;
    }
    //Function to calculate bonus based on salary
    double bonus(){
      if(salary>50000){
        return salary *0.10;
      }
      else{
        return salary *0.05;
      }
    }
    //Function to display bonus
    void displayBonus(){
      double bonusAmount =bonus();
      cout << "Bonus Amount          :" << bonusAmount << "TK" <<endl;
      cout << "Total Salary With Bonus: "<<(annualSalary()+bonusAmount)<< "TK" <<endl;
    }


  };
  int main(){
    int n;
    cout << "Enter the number of employees: ";
    cin >>n;
    EmployeeManagementSystem employees[n];
    for(int i=0;i<n;i++){
      cout << "Enter details for Employee " << (i+1) <<":"<<endl;
      employees[i].input();
      cout << endl;
    }
    cout << "Employee Details:"<<endl;
    for(int i=0;i<n;i++){
      cout << "Employee " << (i+1)<<":"<<endl;
      employees[i].display();
      cout << "Annual Salary         :" << employees[i].annualSalary()<< "TK" <<endl;
      employees[i].displayBonus();
      cout << endl;
    }
    return 0;
  }
