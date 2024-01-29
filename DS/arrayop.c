#include<stdio.h>
#include<stdlib.h>
void main()
{
	 int i,j,n,pos,a[20],val,ch;
	printf("Array Operations\n");
	printf("Enter The size of array:");
	scanf("%d",&n);
	printf("\nEnter array Elements:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
		printf("array Elements are:");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	while(1)
	{
	
	printf("\nMenu\n1.Insert\n2.Delete\n3.display\n4.Exit\nEnter your choice:");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("Enter the element & position\n");
			scanf("%d%d",&val,&pos);
			n++;
			pos--;
			for(i=n-1;i>pos;i--)
			   a[i]=a[i-1];
			a[pos]=val;
		}
		else if(ch==2)
		{
			printf("Enter The position to be deletd:");
			scanf("%d",&pos);
			pos--;
			for(i=pos;i<n-1;i++)
			   a[i]=a[i+1];
			n--;
		}
		else if(ch==3)
		{
			printf("New array\n");
			for(i=0;i<n;i++)
			  printf("%d ",a[i]);
		}
		else 
		  exit(0);
}
}
