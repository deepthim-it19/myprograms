#include<stdio.h>
int main()
{
int n,i,factorial=1;
printf("Enter an factorial number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
factorial=factorial*i;
}
printf("factorial %d=%d",n,factorial);
return 0;
}
