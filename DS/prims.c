#include<stdio.h>
#include<conio.h>
	int a,b,i,j,u,v,n,ne=1;
	int mincost=0,min,visited[10]={0},cost[10][10];
void main()
{
printf("PRIMS ALGORITHM\n");
printf("Enter the no of vertices:");
scanf("%d",&n);
printf("Enter cost adjacency matrix:\n");
for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  {
  	scanf("%d",&cost[i][j]);
  	if(cost[i][j]==0)
  	    cost[i][j]=999;
	  }	
visited[1]=1;
while(ne<n)
{

for(i=1,min=999;i<=n;i++)
   for(j=1;j<=n;j++)
      if(cost[i][j]<min && visited[i]!=0)
      {
	     min=cost[i][j];
		 a=u=i;
		 b=v=j;
	}
if(visited[u]==0 || visited[v]==0)
{
	printf("\ncost of edge%d:(%d,%d)=%d",ne++,a,b,min);
	mincost=mincost+min;
	visited[b]=1;
		 }		 
cost[a][b]=cost[b][a]=999;		 	  
}
printf("\nMinimum cost=%d",mincost);
}
