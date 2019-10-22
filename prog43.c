#include<stdio.h>
int main()
{
int row,column;
for(row=0;row<6;row++)
{
for(column=0;column<+row;column++)
{
printf("%d",row);
}
}
return 0;
}
