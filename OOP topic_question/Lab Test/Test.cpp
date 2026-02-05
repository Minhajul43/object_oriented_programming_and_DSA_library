#include<iostream>
using namespace std;
class Teacher{
  private:
  double salary;
  public:
  Teacher(){
    cout<<"Hi Iam constructor!"<<endl;
  }
  string name;
  string dept;
  string sub;

  void setSalary(double s){
    salary=s;
  }
  double getSalary(){
    return salary;
  }
};
int main()
{
Teacher t1;
t1.name="Minhajul";
t1.dept="CSE";
t1.sub="C++";
t1.setSalary(25000);

cout <<"Name   : "<<t1.name<<endl;
cout <<"Dept   : "<<t1.dept<<endl;
cout <<"Subject: "<<t1.sub<<endl;
cout <<"Salary  : "<<t1.getSalary()<<endl;

return 0;
}