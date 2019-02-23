#include<stdio.h>
int main()
{
int a[3],b[3],i,j;
printf("enter numbers in the first array:");
for(i=0;i<=3;i++)
scanf("%d",&a[i]);
printf("enter numbers in the second array:");
for(i=0;i<=3;i++)
scanf("%d",b[i]);
for(i=0;i<=3;i++)
if(a[i]==b[i])
printf("match");
else
printf("not match");
return 0;
}
