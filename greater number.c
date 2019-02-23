#include<stdio.h>
int main()
{

int i,j,k;
printf("enter two numbers :-");
scanf("%d %d %d",&i,&j,&k);
if(i>j&i>k)
{
printf(" %d is greater ",i);
}
else if(j>i&j>k)
printf("%d is greater ",j);

else
printf("%d is greater",k);
return 0;
}
