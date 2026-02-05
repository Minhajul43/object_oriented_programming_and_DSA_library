#include <iostream>
using namespace std;
class Node {
public:
int data;
Node* next;
Node(int val) {
data = val;
next = nullptr;
}
};
class LinkedList {
private:
Node* head;
public:
LinkedList() {
 head = nullptr;
}

void insert_end(int val) {
Node* newNode = new Node(val);
if (head == nullptr) {
head = newNode;
return;
}
Node* temp = head;
while (temp->next != nullptr) {
temp = temp->next;
}
temp->next = newNode;
}

void display() {
Node* temp = head;
while (temp != nullptr) {
cout << temp->data << " -> ";
temp = temp->next;
}
cout << "NULL" << endl;
}
};
int main() {
LinkedList list;
list.insert_end(10);
list.insert_end(20);
list.insert_end(30);
cout << "Linked List: ";
list.display();
return 0;
}
//Output:
//Linked List: 10 -> 20 -> 30 -> NULL