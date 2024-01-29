#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left,*right;
}*root;
void insert();
void search();
void inorder(struct node *root);
struct node *delete(struct node *root,int value);
struct node *minValueNode(struct node *curr);
int main()
{
	int data,value,ch;
	
	do
	{
		printf("\nSELECT\n1.INSERT\n2.DELETE\n3.SEARCH\n4.INORDER DISPLAY\n4.EXIT\nENTER CHOICE:");
	scanf("%d",&ch);
	if(ch==1)
	{
		insert();	
	}
	else if(ch==2)
	{
		printf("Enter value to delete:");
		scanf("%d",&value);
		delete(root,value);
	}
	else if(ch==3)
	    search();
	else if(ch==4)
	{
		inorder(root);
	}
	else
	   exit(0);
}while(1);
return 0;
}
void insert()
{
	struct node *curr,*pre,*newnode;
	int data;
	printf("Insert data:");
	scanf("%d",&data);
	if(root==NULL)
	{
	root=malloc(sizeof(struct node));
	root->data=data;
	root->left=NULL;
	root->right=NULL;
	printf("value %d inserted:",data);
	}
	else
	{
	newnode=malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	curr=root;
	while(curr!=NULL)
	{
     pre=curr;
	if(curr->data<=data)
	   curr=curr->right;
    else
       curr=curr->left;
   }
   if(pre->data<=data)
      pre->right=newnode;
    else
      pre->left=newnode;
    printf("value %d inserted:",data);	
}
}
void inorder(struct node *root)
{
if(root!=NULL)
{

inorder(root->left);
printf("%d->",root->data);
inorder(root->right);	
}
}
struct node *delete(struct node *root,int value)
{
int data;
struct node *curr;	
if(root==NULL)
  return 0;
else if(value>root->data)
	   root->right=delete(root->right,value);
 else if(value<root->data)
      root->left=delete(root->left,value);
else
{
if(root->left==NULL)
{
   curr=root->right;
   free(root);
   return curr;
}
else if(root->right==NULL)
{

      curr=root->left;
	  free(root);
	  return curr;	
}
else
{
	struct node *curr=minValueNode(root->right);
	root->data=curr->data;
	root->right=delete(root->right,curr->data);
}
}
return root;
}	
struct node *minValueNode(struct node *curr)
{
while(curr->left!=NULL)
  curr=curr->left;
 return curr;	
}
void search()
{
	int value,flag=0;
struct node *curr;	
printf("Element to be searched:");
scanf("%d",&value);
   if(root==NULL)
     printf("tree is empty");
    else
	{
    curr=root;
    while(curr!=NULL)
    {
    	if(curr->data==value)
    	   {
		   
		   flag=1;
    	   printf("Element %d found:",value);
           break;
	      }
	     else if(curr->data<value)
	           curr=curr->right;
	     else
	         curr=curr->left;

	}
if(flag==0)
  printf("not found");	
}
}
