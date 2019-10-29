#include<stdio.h>
int main()
{
int i,j,n;
printf("enter an table no:");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
j=i*n;
printf("\n%d*%d=%d",i,n,j);
}
return 0;
}


