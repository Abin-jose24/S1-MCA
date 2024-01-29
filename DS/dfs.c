#include<stdio.h>
int adj[10][10],visited[10],stack[10],i,j,n,v;
void dfs();
void main()
{
	printf("DFS traversal");
	printf("\nEnter no of vertices:");
	scanf("%d",&n);
	printf("\nEnter the adjacency matrix:\n");
	for(i=1;i<=n;i++)
	   for(j=1;j<=n;j++)
	   scanf("%d",&adj[i][j]);
	printf("\nEnter The starting vertex:");
	scanf("%d",&v);
	visited[v]=1;
	stack[1]=v;
	dfs();
	getch();
}
void dfs()
{
	int top=1,popped[20],p=1,vertex;
	while(top>=1)
	{
	vertex=stack[top];
	int found=0;
	for(i=1;i<=n;i++)
		if(adj[vertex][i]==1 && visited[i]==0)
		{
			visited[i]=1;
			found=1;
			stack[++top]=i;
			break;
		}
		
	if(!found)
	{
		popped[p++]=stack[top];
		top--;
	}
	
}
printf("\ndfs traversal:");
for(i=p-1;i>=1;i--)
   printf("%d ",popped[i]);
}
 
