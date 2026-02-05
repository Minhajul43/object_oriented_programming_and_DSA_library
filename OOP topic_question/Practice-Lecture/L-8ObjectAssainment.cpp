#include<iostream>
using namespace std;
class student{
  public:
  string name;
  int age;
};
int main()
{
  student s1,s2;
  s1.name="Minhajul";
  s1.age=23;
  s2=s1;
  cout<<"Name:"<<s2.name<<endl;
  cout<<"Age:"<<s2.age<<endl;
  return 0;
}