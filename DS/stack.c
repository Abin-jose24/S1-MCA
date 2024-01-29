#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int stack[20],top=-1,ch,i,j,n,value;
	printf("Stack implementation\n");
	printf("Enter size of stack:");
	scanf("%d",&n);
	while(1)
	{
		printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\nENTER CHOICE:");
		scanf("%d",&ch);
		if(ch==1)
		{
		if(top==n-1)
		   printf("STACK OVERFLOW\n");
		else
			 {
			 	top++;
			 	printf("\nEnter value to be inserted:\n");
	         	scanf("%d",&value);
	         	stack[top]=value;
	    
			 }  
		}
		else if(ch==2)
		{
			if(top==-1)
			  printf("Stak underflow");
			else
			{
				value=stack[top];
				printf("Element %d deleted\n",value);
				top--;
			}
		}
		else if(ch==3)
		{
			printf("Stack elements are:");
			for(i=0;i<=top;i++)
			printf("%d ",stack[i]);
		}
		else
		   exit(0);
	}
	getch();
}
