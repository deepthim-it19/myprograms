#include<stdio.h>
int main()
{
int x,y,z;
printf("Enter x");
scanf("%d",&x);
printf("Enter y");
scanf("%d",&y);
printf("Enter z");
scanf("%d",&z);
if(x>y && x>z)
{
  printf("The greatest number is %d",x);
}
else if(y>x && y>z)
{
  printf("The greatest number is %d",y);
}
else
{
  printf("The greatest number is %d",z);
}
return 0;
}

