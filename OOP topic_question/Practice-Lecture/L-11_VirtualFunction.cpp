#include<iostream>
using namespace std;
class Base{
  public:
  virtual void display(){
    cout<<"Display from base class"<<endl;
  }
};
class Drived:public Base{
  public:
  void display() override{
    cout <<"Display from drived class"<<endl;
  }
};
int main()
{
  Base*b;
  Drived d;
  b=&d;
  b->display();
  return 0;
}