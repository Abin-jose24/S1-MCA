#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next,*head,*temp;

};


int main()
{
int data;
struct node *next,*temp;
struct node* head=(struct node*) malloc(sizeof(struct node));
struct node* newnode=(struct node*) malloc(sizeof(struct node));
if(head==NULL)
{
printf("Linked list is empty!/nEnter a element\n");
head->data=data;
head->next=NULL;
}
 if(head->next==NULL)
{
printf("Enter an element");
head->next=newnode;
newnode->data=data;
newnode->next=NULL;
}
temp=newnode;
while(temp!=NULL)
{
printf("%d ",temp->data);
temp=temp->next;
}
return 0;
}
