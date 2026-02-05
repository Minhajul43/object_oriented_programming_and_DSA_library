#include<iostream>
using namespace std;
class Student{
  public:
  int id;
  string name;
  float marks;
  void input(){
    cout<<"------Input the Student Details------"<<endl;
    cout<<"Enter the Student ID:";
    cin>>id;
    cin.ignore();
    cout<<"Enter the Student Name:";
    getline(cin,name);
    cout<<"Enter the Student Marks:";
    cin>>marks;
  }
  void display(){
    cout<<"-------Output Student Details--------"<<endl;
    cout<<"Student ID      :"<<id<<endl;
    cout<<"Student Name    :"<<name<<endl;
    cout<<"Student Marks   :"<<marks<<endl;
  }
};
int main()
{
  Student S;
  S.input();
  S.display();
  return 0;
}