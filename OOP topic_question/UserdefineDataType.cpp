#include<iostream>
using namespace std;
class Student{
  public:
  string name;
  int roll;
  float mark;
};
void printf(Student s){
  cout <<s.name<<" "<<s.roll<<" "<<s.mark<<endl;
}

int main()
{
  Student s1;
  s1.name="Minhajul";
  s1.roll=43;
  s1.mark=82.49;

  Student s2;
  s2.name="Juwel";
  s2.roll=21;
  s2.mark=80.49;

  printf(s1);
  printf(s2);

  //cout <<s1.name<<" "<<s1.roll<<" "<<s1.mark<<" "<<endl;

 // cout <<s2.name<<" "<<s2.roll<<" "<<s2.mark<<" "<<endl;


}