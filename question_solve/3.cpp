//Make a c++ program to take student details
#include<iostream>
using namespace std;
class Student{
  private:
  int studentID;
  string name;
  double GPA;
  public:
  void inputDetail(){
    cout <<"Enter the student ID:";
    cin >> studentID;
    cin.ignore();
    cout <<"Enter Name:";
    getline(cin,name);
    cin.ignore();
    cout <<"Enter gpa:";
    cin >>GPA;
  }
  void displayDatail(){
    
    cout <<"The student ID is  :"<<studentID<<endl;
    cout <<"The student neme is:"<<name<<endl;
    cout <<"The student gpa is :"<<GPA<<endl;
  }
};
int main(){
  Student s;
  int n;
  cout <<"Enter number of Student:";
  cin >>n;
  for(int i=0;i<n;i++){
           cout <<"Input student details "<<i+1<<":----"<<endl;
    s.inputDetail();
 }
for(int i=0;i<n;i++){
              cout <<"Display student details"<<i+1<<":"<<endl;
   s.displayDatail();
 }
 return 0;
}

  
 