#include<stdio.h>
#include<math.h>
int gcd(int A,int B)
{
    int temp;
while((B%A)!=0)
{
temp=B%A;
B=A;
A=temp;
}
return(A);
}

int main()
{
int n1,n2,n3,n4,result;
printf("enter four numbers:");
scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
result=gcd(gcd(n1,n2),gcd(n3,n4));
printf("the gcd of %d %d %d %d and %d \n",n1,n2,n3,n4,result);
}
