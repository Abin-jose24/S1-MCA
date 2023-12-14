#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *temp, *right, *left;
};
struct node *root = 0, *newnode, *prev;
void main()
{
    int data, n;
    printf("No of elements");
    scanf("%d", &n);
    i = 1;
    while (i < n)
    {
        printf("Enter the data:");
        scanf("%d", &data);
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = data;
        newnode->right = NULL;
        newnode->left = NULL;
        temp = root;
        if (root == 0)
        {
            root = newnode;
            root->left = NULL;
            root->right = NULL;
        }
        else
        {
            ptemp = NULL; // ptemp-parent node temp variable
            rtemp = root; // rtemp-rootnode temp variable
            while (rtemp != NULL)
            {
                ptemp = rtemp;
                if (data < rtemp->data)
                    rtemp = rtemp->left;

                else
                    rtemp = rtemp->right;
            }
            if (data < ptemp->data)
                ptemp->left = newnode;
            else
                ptemp->right = newnode;
        }
        i++;
        printf("Value inserted");
    }
