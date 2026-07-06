#include <stdio.h>
#include <stdlib.h>
int key[20],n,m;
int *ht,indx;
int count=0;

void insert(int key)
{
    indx=key%m;
    while(ht[indx]!=-1)
    {
        indx=(indx+1)%m;
    }
    ht[indx]=key;
    count++;
}

void display()
{
    int i;
    printf("\nHash Table contents are:\n");
    for(i=0;i<m;i++)
    printf("\nT[%d]-->%d",i,ht[i]);
}

void main()
{
    int i;
    printf("\n Enter the number of empolyee records(N):");
    scanf("%d",&n);
    printf("\n Enter the two digit memory location(m) for hash table:");
    scanf("%d",&m);
    ht=(int*)malloc(m*sizeof(int));
    for(i=0;i<m;i++)
    ht[i]=-1;
    printf("\nEnter the four digit key values(K) for N Employee Records:\n");
    for(i=0;i<n;i++)
    scanf("%d",&key[i]);
    for(i=0;i<n;i++)
    {
        if(count==m)
        {
            printf("\n Hash table is full.Cannot insert the record %d key\n",i+1);
            break;
        }
        insert(key[i]);
    }
    display();
}