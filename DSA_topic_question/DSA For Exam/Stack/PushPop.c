//push into stack
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
    printf("\nThe stack is underflow!!\n");
    return -1;
  }
  else{
    int value=stack[top];
    top--;
    printf("\nThe value %d is popped from stack\n",value);
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
    printf("\nThe stack is empty!!\n");
    return -1;
  }
  else{
    return stack[top];
  }
}
// display the stack element
void display(){
  if(top==-1){
    printf("\nThe stack is empty!!\n");
  }
  else{
    printf("\nThe stack element is:\n");
    for(int i=top;i>=0;i--){
      printf("%d   ",stack[i]);
    }
  }
}
int main()
{
  printf("This is a program for stack push and pop opration\n");
  printf("\n-----Push into stack-----\n");
  int n;
  printf("How many element you want to push into stack:");
  scanf("%d",&n);
  if(n>MAX){
    printf("The stack can hold maximum %d element only\n",MAX);
    return 0;

  }
  for(int i=0;i<n;i++){
    int value;
    printf("Push element no.%d:",i+1);
    scanf("%d",&value);
    push(value);
  }

  display();
  pop();
  display();
 printf("\nThe stack is empty: %s",isEmpty()?"Yes":"No"); 
 printf("\n The top element is: %d\n",peek());
  return 0;


}
