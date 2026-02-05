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