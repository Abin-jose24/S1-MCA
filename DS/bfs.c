#include<stdio.h>
int visited[10]={0},queue[10],adj[10][10],newarray[10];
int i,j,flag=0,n,v,front=0,rear=0,x=1;
void bfs(int);
void main()
{
	printf("BFS");
	printf("\nEnter the no. of vertices:");
	scanf("%d",&n);
	printf("Enter the adjacency matrix:\n");
	for(i=1;i<=n;i++)
	    for(j=1;j<=n;j++)
	        scanf("%d",&adj[i][j]);
    printf("\nenter the starting vertex:");
    scanf("%d",&v);
    visited[v]=1;
    rear++;
    front++;
    queue[rear]=v;
    newarray[x]=v;
    bfs(v);
    printf("\nvisited array\n");
    for(i=1;i<=n;i++)
        if(visited[i]==1)
           printf("%d ",i);
        else
        {
		flag=1;
		   printf("no spanning tree");
		   break;
	   }
if(flag==0)
{
	printf("\nNew array:\n");
	for(i=1;i<=n;i++)
	   printf("%d ",newarray[i]);
}
getch();
 } 
 void bfs(int v)
 {
 	for(i=1;i<=n;i++)
 	{
 		if(adj[v][i]==1 && visited[i]==0)
 		{
 			visited[i]=1;
 			queue[++rear]=i;
 			newarray[++x]=queue[rear];
		 }
	 }
	 if(front<=rear)
	   {
	   	front++;
	   	bfs(queue[front]);
	   }
 	
 }
