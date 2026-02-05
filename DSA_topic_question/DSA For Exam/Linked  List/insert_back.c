// #include<stdio.h>
// #include<stdlib.h>
// struct Node{
//   int data;
//   struct Node*next;
// };
// void printList(struct Node*head){
//   struct Node*temp=head;
//   while(temp!=NULL){
//     printf("%d --> ",temp->data);
//     temp=temp->next;
//   }
//   printf("NULL");
// }
// void insert_beg(struct Node**head,int val){
//   struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
//   newNode->data=val;
//   newNode->next=*head;
//   *head=newNode;
// }
// int main()
// {
//   struct Node*head=NULL;

//   insert_beg(&head,10);
//   insert_beg(&head,20);
//   insert_beg(&head,30);
//   insert_beg(&head,40);
//   insert_beg(&head,50);

//   printList(head);
//   return 0;

// }


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
void insert_beg(struct Node**head,int val){
  struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
  newNode->data=val;
  newNode->next=*head;
  *head=newNode;
}

int main()
{
  struct Node*head=NULL;
  insert_beg(&head,50);
  insert_beg(&head,40);
  insert_beg(&head,30);
  insert_beg(&head,20);
  insert_beg(&head,10);

  printList(head);
  return 0;
}