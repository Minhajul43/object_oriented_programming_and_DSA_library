// // The Employee Management program
// #include<iostream>
// #include<string>
// using namespace std;
// class Employee{
// private:
// int empID;
// string empname;
// string empDept;
// double empSalary;
// public:
// void inputDetail(){
//   cout <<"Enter the employee ID:";
//   cin >>empID;
//   cout <<"Enter the employee Name:";
//   getline(cin,empname);
//   cin.ignore();
//   cout <<"Enter the employee department:";
//   getline(cin,empDept);
//   cin.ignore();
//   cout <<"Enter the employee salary:";
//   cin >>empSalary;
// }
// void displayDatail(){
//   cout << "---Employee Details----";
//   cout <<"ID                :"<<empID<<endl;
//   cout <<"Name              :"<<empname<<endl;
//   cout <<"Department        :"<<empDept<<endl;
//   cout <<"Total Salary      :"<<empSalary<<endl;
// }
// void increaseSalary(double percent){
//   if(percent>0){
//     void salary+=salary*(salary/100.0);
//   }
//   else{
//     cout<<"\n There are no increase the salary:\n";
//   }

// }
// };
// int main()
// {
//   Employee E1;
//   E1.inputDetail();
//   E1.displayDatail();

//   double percent;
//   cout<<"\n Enter the percentance of bonus : ";
//   E1.increaseSalary(percent);
//   cout << "Afer a "<<percent<<"% bonus added "<<endl;
//   E1.displayDatail();
//   return 0;
// }

#include <iostream>
#include <string>
#include <iomanip> // for std::fixed and std::setprecision
using namespace std;
class Employee {
private:
int id;
string name;
string department;
double salary;
public:
// 1. Input employee details
void inputDetails() {
cout << "Enter Employee ID: ";
cin >> id;
//cin.ignore(numeric_limits<streamsize>::max(), '\n'); // flush newline
cout << "Enter Name: ";
getline(cin, name);
cin.ignore();
cout << "Enter Department: ";
getline(cin, department);
cin.ignore();
cout << "Enter Salary: ";
cin >> salary;
}
// 2. Display employee details
void displayDetails() const {
cout << "\n--- Employee Information ---\n";
cout << "ID         : " << id << "\n";
cout << "Name       : " << name << "\n";
cout << "Department : " << department << "\n";
cout << fixed << setprecision(2);
cout << "Salary     : $" << salary << "\n";
}
// 3. Increase salary by a given percentage
void increaseSalary(double percent) {
if (percent > 0) {
salary += salary * (percent / 100.0);
} else {
cout << "Percentage must be positive. No change made.\n";
}
}
};
int main() {
Employee emp;
// Read employee info
emp.inputDetails();
// Show current details
emp.displayDetails();
// Ask for a raise percentage
double pct;
cout << "\nEnter salary increase percentage: ";
cin >> pct;
// Apply the raise and show updated details
emp.increaseSalary(pct);
cout << "\nAfter a " << pct << "% raise:\n";
emp.displayDetails();
return 0;
}