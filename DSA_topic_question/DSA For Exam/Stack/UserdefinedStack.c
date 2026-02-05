// At first create a stack input given the user.Then Create a option 1.push 2.pop and 3. top view.then call the specific function.
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX];
int top=-1;
// push into stack
void push(int value){
  if(top==MAX-1){
    printf("The stack is overflow!!\n");
  }
  else{
    top++;
    stack[top]=value;
    printf("\nThe value %d is pushed into stack\n",value);
  }
}
// pop from stack 
int pop(){
  if(top==-1){
    printf("\n The stack is underflow!!\n");
    return -1;
  }
  else{
    int value= stack[top];
    top--;
    printf("\n The value %d is popped from stack\n",value);
    return value;
  }
}
// check the stack is empty or not
int isEmpty(){
  return top==-1;
}
// show the top element of stack 
int peek(){
  if(top==-1){
    printf("\n The stack is empty!!\n");
    return -1;
  }
  else{
    return stack[top];
  }
}
// display the stack element 
void display(){
  if(top==-1){
    printf("\n The stack is empty!!\n");
  }
  else{
    printf("\n The stack element is:  ");
    for(int i=top;i>=0;i--){
      printf("%d   ",stack[i]);
    }
  }
}
int main(){
  printf("What do you want ?\n 1.Push into stack \n 2.Pop from stack \n 3. Top view of stack \n 4. Display stack element \n 5. Exit\n");
  int choice,value;
  do{
    pri
  }
}