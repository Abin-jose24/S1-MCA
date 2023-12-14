#include<stdio.h>  
#include<stdlib.h>  
void insert(int);  
struct node  
{  
    int data;  
    struct node *left;   
    struct node *right;   
};  
struct node *root;  
void main ()  
{  
    int choice,item;  
    do   
    {  
        printf("\nEnter the item which you want to insert?\n");  
        scanf("%d",&item);  
        insert(item);  
        printf("\nPress 0 to insert more ?\n");  
        scanf("%d",&choice);  
    }while(choice == 0);  
}  
void insert(int item)  
{  
    struct node *newnode, *ptemp , *rtemp;  
    newnode = (struct node *) malloc(sizeof (struct node));  
    if(newnode == NULL)  
    {  
        printf("can't insert");  
    }  
    else   
    {  
    newnode -> data = item;  
    newnode -> left = NULL;  
    newnode -> right = NULL;   
    if(root == NULL)  
    {  
        root = newnode;  
        root -> left = NULL;  
        root -> right = NULL;  
    }  
    else   
    {  
        ptemp = NULL;  
        rtemp = root;   
        while(rtemp != NULL)  
        {  
            ptemp = rtemp;   
            if(item < rtemp->data)  
            {  
                rtemp = rtemp -> left;   
            }   
            else   
            {  
                rtemp = rtemp -> right;  
            }  
        }  
        if(item < ptemp -> data)  
        {  
            ptemp -> left = newnode;   
        }  
        else   
        {  
            ptemp -> right = newnode;   
        }  
    }  
    printf("Node Inserted");  
    }  
}  
