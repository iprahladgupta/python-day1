#include<stdio.h>
int main()
{
int i,min,a[10];
printf("enter 10 numbers:");
for(i=0;i<10;i++)
scanf("%d",&a[i]);

min=99999;
for(i=0;i<10;i++)
{
if(a[i]<min)
min=a[i];
}

printf("minimum number is:%d",min);
return 0;
}
