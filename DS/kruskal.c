#include<stdio.h>
int i,j,u,v,a,b,n,ne=1,mincost=0,min,cost[10][10],parent[10];
int find(int);
int uni(int,int);
void main()
{
	printf("kruslkals algorithm:\n");
	printf("Enter no of vertices:");
	scanf("%d",&n);
	printf("Enter Cost adjacency matrix:\n");
	for(i=1;i<=n;i++)
	  for(j=1;j<=n;j++)
	  {
	      scanf("%d",&cost[i][j]);
	      if(cost[i][j]==0)
             cost[i][j]=999;
  }
while(ne<n)
{

  for(i=1,min=999;i<=n;i++)
      for(j=1;j<=n;j++)
         if(cost[i][j]<min)
            {
			
			min=cost[i][j];
            a=u=i;
            b=v=j;
        }
 u=find(u);
 v=find(v);
 if(uni(u,v))
 {
 	printf("\nedge%d:(%d,%d)=%d",ne++,a,b,min);
 	mincost+=min;
 }
cost[a][b]=cost[b][a]=999;	 		    
}
printf("\nmininmum cost:%d",mincost);
}
int find(int i)
{
	while(parent[i])
	i=parent[i];
	return i;
}
int uni(i,j)
{
	if(i!=j)
	{
	
	   parent[j]=i;
	   return 1;
   }
   return 0;
}
