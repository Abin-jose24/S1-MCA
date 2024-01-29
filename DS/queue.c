#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	int n,queue[20],ch,front=-1,rear=-1,value,i;
	printf("Queue Implementation\n");
	printf("Enter size of queue:");
	scanf("%d",&n);
	while(1)
	{
		printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter choice:");
		scanf("%d",&ch);
		if(ch==1)
		{
		if(rear==n-1)
		  printf("\nQueue overflow");	
		else
		{
			printf("\nEnter value to be inserted:");
			scanf("%d",&value);
			if(rear==-1 && front==-1)
			{
			front++;
			rear++;
			queue[rear]=value;
		   }
		   else
		   {
		   
		     rear++;
			queue[rear]=value;
	       }
		}	
		}
		else if(ch==2)
		{
		if(front>rear || (front==-1 && rear==-1 ))	
		    printf("\nQueue underflow");
		else
		{
			if(front==rear)
			{
			
			value=queue[front];
			front++;
			printf("\n%d deleted",value);
			    front=rear=-1;
			}
			else 
			{
			value=queue[front];
			front++;
			printf("\n%d deleted",value);
	      	}
		}
		}
		else if(ch==3)
		{
			if((front==-1 && rear==-1)||front>rear)
			printf("queue empty");
			else
			{
				printf("queue elements are:");
				for(i=front;i<=rear;i++)
				  printf("%d ",queue[i]);
			}
		}
		else
		 exit(0);
	}
}
