#include<stdio.h>
int main()
{

int i,fact,x,n;
printf("enter the number:");
scanf("%d",&i);
x=i;
if(i==0)
{
printf("factorial is 1 ");

}
else
{
    while(i<=x){
fact=fact*x;
x--;}
printf("fact =%d",fact);
}
}
