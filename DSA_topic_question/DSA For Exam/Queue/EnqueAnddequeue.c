// enqueue and dequeue in queue
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int queue[MAX];
int front=-1;
int rear=-1;
// Enqueue operation into queue
void enqueue(int value){
  if(rear==MAX-1){
    printf("The queue is overflow!!\n");
  }
  else{
    if(front==-1){
      front=0;
    }
    rear++;
    queue[rear]=value;
    printf("The value %d is enqueued into queue\n",value);

  }

}
// Dequeue oprtation from queue
int dequeue(){
  if(front==-1||front>rear){
    printf("The queue is underflow!!\n");
    return -1;
  }
  else{
    int value=queue[front];
    front++;
    printf("The value %d is dequeued from queue\n",value);
    return value;
  }
  
}
// display the queue element 
void display(){
  if(front==-1||front>rear){
    printf("The queue is empty!!\n");

  }
  else{
    printf("The queue element is :\n");
    for(int i=front;i<=rear;i++){
      printf("%d ",queue[i]);
    }
  }
}
int main()
{
  printf("This is a program for stack Enqueue and Dequeue opration\n");
  printf("-----Enqueue into stack-----\n");
  int n;
  printf("How many element you want to Enqueue into stack:");
  scanf("%d",&n);
  if(n>MAX){
    printf("The Queue can hold maximum %d element only\n",MAX);
    return 0;

  }
  for(int i=0;i<n;i++){
    int value;
    printf("Enqueue element no.%d:",i+1);
    scanf("%d",&value);
    enqueue(value);
  }
  display();
  printf("\n----Dequeue from stack----\n");
  dequeue();
  display();
  return 0;

}