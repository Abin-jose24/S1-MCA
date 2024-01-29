#include<stdio.h>
#include<stdlib.h>
int i,j,n,a[25],x,flag;
void linear(int);
void binary(int);
void main()
{
	int ch;
	printf("Searching in array");
	printf("\nEnter the Size of array:");
	scanf("%d",&n);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	printf("Array elements are:");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	while(1)
	{
		printf("\nEnter Search Element:");
		scanf("%d",&x);
		printf("\nSearching method\n1.Linear Search\n2.Binary Search\n3.Exit\nEnter your choice:");
		scanf("%d",&ch);
		if(ch==1)
		   linear(x);
		else if(ch==2)
		   binary(x);
		else
		   exit(0);
	}
	getch();
}
void linear(int x)
{
	flag=0;
	printf("\nLinear search\n");
	for(i=0;i<n;i++)
	    if(a[i]==x)
	    {
	       printf("Element %d found at position %d",x,++i);
	      flag=1;
	      break;
	  }
if(flag==0)
  printf("element not found");
}
void binary(int x)
{
	int mid,high,temp,low,flag=0;
	//sorting array
	printf("\nBinary search\n");
	for(i=0;i<n-1;i++)
	    for(j=i+1;j<n;j++)
              if(a[i]>a[j])
              {
              	temp=a[i];
              	a[i]=a[j];
              	a[j]=temp;
              }
            
			  
	printf("\nSorted array:");
    for(i=0;i<n;i++)
      printf("%d ",a[i]);
      low=0;high=n-1;
      for(i=low;i<=high;i++)
      {
      	mid=(low+high)/2;
      	if(a[mid]==x)
      	{
		  flag=1;
      	   printf("\nElement %d found at position %d\n",x,mid+1);
      	   break;
	    }
	  else if(a[mid]<x)
	          low=mid+1;
	        else
	           high=mid-1;
     }
     if(flag==0)
        printf("Element not found");
    }
