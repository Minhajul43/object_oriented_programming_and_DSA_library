#include<iostream>
#include<string>
using namespace std;
class Teacher {
  public:
string name;
int age;
string subject;
string dept;
void input(){
  cout <<"Enter name:";
  getline(cin,name);
  cin.ignore();//ata right way ki?

  cout <<"ENter age:";
  cin >>age;
  cout <<"Enter subject:";
  cin >>subject;
  cout << "Enter department:";
  cin >>dept;
}
void display(){
  cout <<"Name:"<<name<<endl;
  cout <<"Age:"<<age<<endl;
  cout << "Subject:"<<subject<<endl;
  cout <<"Department:"<<dept<<endl;
}

};

//if i make a function to take input and print ,what can i do?

int main(){
  // if i want to take how many teqchers i want to take input from user
  int n;
  cout << "Enter number of teachers:";
  cin >>n;
  Teacher t[n];
  for(int i=0;i<n;i++){
    cout <<"Enter details of theacher "<<i+1<<":"<<endl;
  t[i].input();
cout << endl; 
 }
 cout<< "Details of teachers:"<<endl;
 for(int i=0;i<n;i++){
  cout <<"Details of teacher"<<i+1<<":"<<endl;
  t[i].display();
  cout << endl;
 }
 return 0;



}