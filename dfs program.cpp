#include<stdio.h>
int adj[10][10],visited[10],queue[10];
int n;
void bfs(int start)
{
	int front = 0,rear=0;
	queue[rear++]=start;
	visited[start]=1;
	while(front < rear)
	{
		int current=queue[front++];
		printf("%d\t",current);
		for(int i=1;i<=n;i++)
		{
			if(adj[current][i]==1&&!visited[i])
			{
				queue[rear++]=i;
				visited[i]=1;
			}
		}
	}
}
int main()
{
	int i,j,start;
	printf("enter number of vertices:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	visited[i]=0;
	printf("enter adjacency matrix:\n");
	for (i=1;i<=n;i++)
	   for(j=1;j<=n;j++)
	      scanf("%d",&adj[i][j]);
    printf("enter starting vertex:");
    scanf("%d",&start);
    printf("BFS Traversal:");
    bfs(start);
    return 0;
}
