void main()
{
int x,i,a=-1,b=1,c;
printf("enter number:");
scanf("%d",&x);
for(i=1;i<=x;i++)
{
c=a+b;


printf("%d ",c);
a=b;
b=c;
}
}
