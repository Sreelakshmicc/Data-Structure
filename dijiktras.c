#include<stdio.h>
#define infinity 9999
#define max 10
void dijiktra(int a[max][max],int n,int start node)
int main()
{
int a[ma][max],i,j,n,u;
printf("Enter number of vertices:");
scanf("%d",&n);
printf("Enter adjacency matrix:");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
scanf("%d",G[i][j]);
printf("Enter the starting node:");
scanf("%d",&u);
dijikstra(G,n,u);
return 0;
}
void dijikstra(int G[max][max],int n,int startNode)
{
int cost[max][max],dist[max],prcd[max];
for(i=0;i<n;i++)
for(j=0;j<n;j++)
if(G[i][j]==0)
cost[i][j]=infinity;
else
cost[i][j]=G[i][j];
for(i=0;i<n;i++)
{
dist[i]=cost[startnode][i];
prcd[i]=startnode;
visited[i]=0;
}
distance[startnode]=1;
count=1;
for(i=0;i<n;i++)
if(i!=startnode)
{


