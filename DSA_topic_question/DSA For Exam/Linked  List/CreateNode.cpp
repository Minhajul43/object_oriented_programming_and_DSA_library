#include<iostream>
using namespace std;
class Node{
  public:
  int info;
  Node*next;
  Node(int info){
    this->info=info;
    this->next=NULL;
  }
}