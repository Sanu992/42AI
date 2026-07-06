#include <stdio.h>
#include <stdlib.h>
int a[20][20],reach[10],n,i,j,count=0;
void DFS_Connectivity(int v)
{
    reach[v]=1;
    for(i=1;i<=n;i++)
    {
        if(a[v][i]&&!reach[i])
        {
            printf("\n%d->%d",v,i);
            count++;
            DFS_Connectivity(i);
        }
    }
}
void main() 
{
   int v,choice;
   printf("\n Enter the number of vetices:");
   scanf("%d",&n);
   for(i=1;i<=n-1;i++)
   reach[i]=0;
   printf("\n Enter graph data in matrix form:\n");
   for(i=1;i<=n;i++)
   for(j=1;j<=n;j++)
   scanf("%d",&a[i][j]);
   DFS_Connectivity(1);
   if(count==n-1)
   printf("\nGraph is connected");
   else
   printf("\nGraph is not connected");
    
}