#include<stdio.h>
int main()
{
int a,b,c;
printf("enter two numbers : \n");
scanf("%d %d",&a,&b);
sum(a,b);
return 0;
}
 sum(int a, int b)
{
    int c=a+b;
    printf("sum is=%d\n",c);
}
