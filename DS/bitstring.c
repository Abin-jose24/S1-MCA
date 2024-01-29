#include<stdio.h>
#include<conio.h>
int U[10]={1,1,1,1,1,1,1,1,1,1},A[10]={1,0,1,1,0,0,1,0,1,1},B[10]={1,1,0,0,0,1,0,1,1,0};
int A_UNION_B[10],A_INTER_B[10],A_DIFF_B[10],B_DIFF_A[10];
void disp(int A[10])
{
	int i;
	for(i=0;i<10;i++)
	   if(A[i]==1)
	      printf("%d ",i+1);
}
void main()
{
	int i;
	printf("Bitstring Operations\n");
	printf("Universal Set:");
	disp(U);
	printf("\n\nSet A:");
	disp(A);
	printf("\n\nSet B:");
	disp(B);
	printf("\n\nA Union B:");
	for(i=0;i<10;i++)
	A_UNION_B[i]=A[i]|B[i];
	disp(A_UNION_B);
	
	printf("\n\nA Intersection B:");
	for(i=0;i<10;i++)
	A_INTER_B[i]=A[i]&B[i];
	disp(A_INTER_B);

printf("\n\nA-B:");
	for(i=0;i<10;i++)
	A_DIFF_B[i]=A[i]-B[i];
	disp(A_DIFF_B);
	
	printf("\n\B-A:");
	for(i=0;i<10;i++)
	B_DIFF_A[i]=B[i]-A[i];
	disp(B_DIFF_A);
	getch();
}
