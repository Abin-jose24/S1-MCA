#include<stdio.h>
#include<conio.h>

struct linkedlist
{
int data;
linkedlist *node=NULL;
}
struct new linkedlist;
struct linkedlist *head=NULL;
struct linkedlist *current=NULL;
void printlist()
{
struct linkedlist *p=head;
printf("\n");
while(p!=NULL)
{
printf("%d",p->data);
p=p->next;
}
}
int main()
{}
