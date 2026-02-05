#include<iostream>
#include<string>
using namespace std;
class Employee {
  private:
  int id;
  string name;
  string department;
  double salary;
  public:
  // Constructor to initialize employee details
  Employee(int id,string name,string department,double salary);
  //Function to display employee details
  void display()
{
   cout << "Employee ID: "<<id<<endl;
   cout << "Name: "<<name<<endl;
   cout << "Department: "<<department<<endl;
   cout << "Salary: "<<salary<<endl;
}
//Function to update employee details
void updateDetails(int newId, string newName, string newDepartment, double newSalary){
    id = newId;
    name = newName;
    department = newDepartment;
    salary = newSalary;
}
};
//Constructor definition
Employee::Employee(int id, string name,string department,double salary){
   this->id = id;
   this->name = name;
   this->department = department;
   this->salary = salary;
}
int main(){
  //Creating on object of Employee Class
  Employee emp1(43, "Minhajul Islam", "Software Development",50000.50);
  //Displaying employee deatails
  emp1.display();
  //Updating employee details
  emp1.updateDetails(43, "Minhajul Islam", "Software Development", 55000.75);
  //Displaying updated employee details
  cout << "Updated Emplouyee Details:"<<endl;
  emp1.display();
  return 0;
}


