#include<stdio.h>
#include<stdlib.h>
int cq[20],ch,item,value,trear,front=-1,rear=-1,max,i,n;
void enque();
void deque();
void search();
void main()
{
   printf("Circular Queue\n");
	printf("Enter the size of queue:");
	scanf("%d",&max);
	while(1)
	{
		printf("\n1.Insertion\n2.Deletion\n3.Search\n4.Display\n5.Exit\nEnter Your Choice:");
		scanf("%d",&ch);
		if(ch==1)
			enque();
		else if(ch==2)
			deque();
		else if(ch==3)
			search();
			
		else if(ch==4)
		     display();
	 else
		  exit(0);
	}
}
void enque()
{
	trear=rear;
	rear=(rear+1)%max;
	if(front==rear)
	{
	   printf("Queue Overflow");
	   rear=trear;
    }
	else if(front==-1)
	{
	 printf("enter element:");
	 scanf("%d",&value);
		front=0;
		rear=0;
		cq[rear]=value;
	}
	else
	{
         printf("enter element:");
	    scanf("%d",&value);	
	    cq[rear]=value;
	}
}
void deque()
{
	if(front==-1)
	  printf("Queue Underflow");
	else if(front==rear)
	{
		value=cq[front];
		printf("%d deleted",value);
		front=rear=-1;
	}
	else
	{
			value=cq[front];
		printf("%d deleted",value);
		front=(front+1)%max;
	}
	
}
void search()
{
	int p=1,flag=0;
	if(front==-1)
	  printf("queue empty");
	else
	{
		printf("Enter search item");
		scanf("%d",&item);
		for(i=front;i!=rear;i=((i+1)%max))
		{
		   if(cq[i]==item)
		     {
		      flag=1;
		     printf("Element found at position %d",p) ;
		   }
		   p++;
	    }
		   if(cq[i]==item)
		   {
		      flag=1;
		      printf("Element found at position %d",p) ;
	}
}
	if(flag==0)
	   printf("Not found");	
}
void display()
{
	if(front==-1)
	  printf("queue empty");
	else
	{
		printf("Queue Elements are:");
		for(i=front;i!=rear;i=((i+1)%max))
		   printf("%d ",cq[i]);
		printf("%d",cq[i]);
	}
	}
