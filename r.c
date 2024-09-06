#include<stdio.h>
#include<stdlib.h>
int main()
{
 int i,j,*n,a;
 n=&a;
 printf("Enter the number of stars\n");
 scanf("%d",n);
 n=&a;
 for(i=1;i<=a;i++)
 {
 for(j=1;j<=a;j++){
 printf("*\t");
 }

 printf("\n");
 }
 return 0;
 }
