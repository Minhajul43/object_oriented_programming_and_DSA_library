#include<iostream>
using namespace std;
class Person{
  public:
  string name;
  int age;
  // Person(string name,int age){// parent constructor!!
  //   this->name=name;
  //   this->age=age;
  // }
  
};
class Student:public Person{
  public:
  int roll;

  // Student(string name,int age,int roll):Person(name,age){
  //   this->roll=roll; // Child constructor!!!
  // }


};
class GradStudent:public Student{
  public:
  string research;
  

  void display(){
    cout <<"Name:"<<name<endl;
    cout <<"Age:"<<age<endl;
    cout <<"Roll:"<<roll<endl;
    cout <<"Reseach:"<<research<endl;
  }
  

};

int main()
{
  GradStudent S1;
  S1.name="Minhajul";
  S1.age=23;
  S1.roll=43;
  S1.research="Python";
  S1.display();
  return 0;

}