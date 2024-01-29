#include<stdio.h>
int visited[10],adj[10][10],i,j,c,n,temp,flag,in;
int indegree(int i);
void main()
{
	printf("Topological sort\n");
	printf("Enter no of vertices:");
	scanf("%d",&n);
	 temp=n;
	printf("\nEnter the adacency matrix:\n");
    for(i=1;i<=n;i++)
       for(j=1;j<=n;j++)
           scanf("%d",&adj[i][j]);
    //visited array intialisation
    for(i=1;i<=n;i++)
        visited[i]=i;
   
    printf("Topology sort:");
    i=1;
    while(i<=n)
    {
    in=indegree(i);
    if(in==1 && visited[i]!=-1)
    {
    	temp--;
    printf("%d->",i);
    visited[i]=-1;
    for(c=1;c<=n;c++)
    {
       adj[c][i]=-1;
       adj[i][c]=-1;
	}
	i=1;
	continue;
	}
	i++;
}
}

int indegree(int i)
{
flag=0;
for(c=1;c<=n;c++)
  if(visited[i]!=-1 && adj[c][i]==0)
    flag++;
if(flag==temp)
   return 1;
else
   return 0;
}
