#include <stdio.h> 
int main()
 {
 int a[20][20],i,j,max,row,column;
 printf("enter an row:"); 
scanf("%d",&row);
 printf("enter an column:");
 scanf("%d",&column); 
for(i=0;i<row;i++)
 { 
for(j=0;j<column;j++)
 { 
scanf("%d",&a[i][j]); 
}
 
} 
max = a[0][0];
 for( i= 0 ; i < row; i++ ) 
{
 for( j = 0 ;j < column ;j ++ ) 
{
 if ( a[i][j] > max ) 
max = a[i][j]; 
} 
}
 
{
 printf("largest element in matrix is %d\n", max); 
} return 0; }



