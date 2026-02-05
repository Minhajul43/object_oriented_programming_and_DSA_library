#include<iostream>
using namespace std;
class Node{
  public:
  int info;
  Node* next;
  Node(int info){
    this-> info = info;
    this-> next=NULL;
  }
};
int main()
{
  //10 20 30 40
  Node a(10);
  Node b(20);
  Node c(30);
  Node d(40);
  Node e(50);
  // formating linked
  a.next=&b;
  b.next=&c;
  c.next=&d;
  d.next=&e;

  //  Node* ptr=&b; // same way to print address
  // (*ptr)=60;
  // ptr->info=60;

  // a.next->info=70;// update info into list
  cout <<b.info<<endl;
  cout<< *d.next.info<<endl;
  cout <<e.info<<endl;
  cout <<(((b.next)->next)->next)->info;//same way to print
}