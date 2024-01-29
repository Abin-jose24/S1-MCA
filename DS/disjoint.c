#include<stdio.h>
int U[10]={1,1,1,1,1,1,1,1,1,1},A[10]={1,1,1,1,1,0,0,1,1,0},B[10]={0,0,0,0,0,0,0,0,0,1},A_UNION_B[10];
int i,j,P_A,P_B;
int find(int a[10])
{
	for(i=0;i<10;i++)
	  if(a[i]==1)
	  {
	  	return ++i;
	  }
	return 0;
}
int disp(int a[10])
{
	for(i=0;i<10;i++)
	  if(a[i]==1)
	  {
	   printf("%d ",i+1);
	  }
}
void main()
{
	printf("Disjoint set operations\n");
	printf("\nUniversal Set:");
	disp(U);
	printf("\n\nSet A:");
	disp(A);
	printf("\n\nSet B:");
	disp(B);
    printf("\n\nParent of A:");
    P_A=find(A);
   	printf("%d",P_A);
   	printf("\nParent of B:");
   	P_B=find(B);
   	printf("%d",P_B);
    if(P_A!=P_B)
	{
		printf("\n\n A UNION B:");
		for(i=0;i<10;i++)
    	A_UNION_B[i]=A[i]|B[i];	
    	disp(A_UNION_B);
		}	
	}

