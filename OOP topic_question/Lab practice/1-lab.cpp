#include<iostream>
using namespace std;
class Student{
  public:
  int id;
  string name;
  float marks;

  void input(){
    cout<<"-----Enter the student Details------"<<endl;
    cout<<"Enter the student ID:";
    cin>>id;
    cin.ignore();
    cout<<"Enter the student name:";
    getline(cin,name);
    cout<<"Enter the student marks:";
    cin>>marks;
  }

  void display()
  {
    cout<<"-----Display student Details-----"<<endl;
    cout<<"The student ID is   :"<<id<<endl;
    cout<<"The student Name is :"<<name<<endl;
    cout<<"The student Marks is:"<<marks<<endl;
  }
};
int main()
{
  Student s;
  s.input();
  s.display();
  return 0;
}