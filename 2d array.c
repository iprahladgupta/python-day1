#include<stdio.h>
int main()
{
int i,j,a[3][3];
printf("enter elements in the array :");
for(i=0;i<3;i++)
 for(j=0;j<3;j++)
 scanf("%d",&a[i][j]);
 printf("array are:%d\n",a[i][j]);
 return 0;

}
