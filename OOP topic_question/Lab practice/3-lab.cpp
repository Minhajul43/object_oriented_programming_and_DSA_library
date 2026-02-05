#include<iostream>
#include<string>
using namespace std;
class Employee{
  private:
  string name;
  int ID;
  double BasicSalary;
  static int countemp;

  public:
  Employee()
  {
    name="unknown";
    ID=0;
    BasicSalary=0.0;
    countemp++;
  }
  Employee(string empnam,int empID,double BasicSal){
    name=empnam;
    ID=empID;
    BasicSalary=BasicSal;
    countemp++;
  }
  double CalculateGrosssalary(){
    double DA=BasicSalary*(.10);
    double HRA=BasicSalary*(.05);
    return  BasicSalary+DA+HRA;
    
  }
  void inputemp()
  {  cin.ignore();
    cout<<"Enter the Employee name:";
    getline(cin,name);
    cout<<"Enter the Employee ID:";
    cin>>ID;
    cout<<"Enter the Employee Basic Salary:";
    cin>>BasicSalary;

  }

  void displayemp()
  {
    cout<<"Employee Name      :"<<name<<endl;
    cout<<"Employee ID   :"<<ID<<endl;
    cout<<"Basic Salary   :"<<BasicSalary<<endl;
    cout<<"Gross Salary   :"<<CalculateGrosssalary()<<endl;

  }
  static int countemployee(){
    return countemp;
  }
};
int Employee::countemp=0;
int main()
{
  int n;
  cout<<"Enter the number of Employee :";
  cin>>n;
  Employee* emp=new Employee[n];
  for(int i=0;i<n;i++){
    cout<<"---Enter the "<<(i+1)<<" employee Details---"<<endl;
    emp[i].inputemp();
  }
  for(int i=0;i<n;i++){
    cout<<"Displaying "<<(i+1) <<"Employee Details"<<endl;
    emp[i].displayemp();
  }
  cout<<"The number of Employee:"<<Employee::countemployee()<<endl;

  delete[] emp;
  return 0;
}
 