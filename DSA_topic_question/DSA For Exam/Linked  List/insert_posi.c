#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node*next;
};

void printList(struct Node*head){
  struct Node*temp=head;
  while(temp!=NULL){
    printf("%d --> ",temp->data);
    temp=temp->next;
  }
  printf("NULL");
}
void insert_posi(struct Node**head,int val,int pos){
  struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=val;
  if(pos==1){
    newNode->next=*head;
    *head=newNode;
    return;
  }
  struct Node* temp=*head;
  for(int i=1;i<pos-1 && temp !=NULL;i++){
    temp=temp->next;
  }
  if(temp==NULL)
    // printf("position out of range !\n");
    return;

newNode->next=temp->next;
temp->next=newNode;

}
int main()
{
  struct Node*head=NULL;
  insert_posi(&head,10,1);
 
  insert_posi(&head,50,2);

  insert_posi(&head,70,3);
    insert_posi(&head,60,4);
   insert_posi(&head,20,5);


  printList(head);
  return 0;
}