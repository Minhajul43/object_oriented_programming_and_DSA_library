// // I want to make a lonked list of intergers
// #include<iostream>
// using namespaces std;
// class Node {
//   public:
//   int data;
//   Node* next;
//   Node(int val): data(val), nest(nullptr) {}
// };
// class LinkedList {
//   private:
//   Node* head;
//   public:
//   LinkedList(): head(nullptr){}
//   void insert(int val){
//     Node* newNode = new Node(val);
//     if(!head){
//       head = newNode;
//     }
//     else {
//       Node* temp = head;
//       while(temp->nest){
//         temp = temp->next;
//       }
//       temp->next = newNode;

//     }
//     void display(){
//       Node* temp = head;
//       while(temp){
//         cout << temp->data << " ";
//         temp =temp->next;
//       }
//       cout << endl;
//     }


//   }
// }

// I want to make a linked list of integers
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) { 
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);

    cout << "Linked List elements: ";
    list.display();

    return 0;
}

  