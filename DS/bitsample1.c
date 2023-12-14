#include<stdio.h>
int u[10]={1,2,3,4,5,6,7,8,9,10};
//void display(int *arr);
int main()
   {
     int a1[10],b1[10],i,r,n;
     int uni[10]={1,1,1,1,1,1,1,1,1,1};
     int a[10]={0,0,0,0,0,0,0,0,0,0};
     int b[10]={0,0,0,0,0,0,0,0,0,0};
     
     
     
     
     printf("Enter the Size of set A:");
     scanf("%d",&n);
     printf("Enter Elements of A:");
     for(i=0;i<n;i++)
        scanf("%d",&a1[i]);
      for(i=0;i<n;i++)
       {
         r=a1[i];
         a[r-1]=1;
        }
        
     
    // int a_union_b[10],a_inter_b[10],a_diff_b[10],b_diff_a[10],i;
    printf("Set A becomes\n");
    for(i=0;i<10;i++)
       printf("%d ",a[i]);
      
      
      return 0;
      }
