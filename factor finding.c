void main()
{
int x,i;
printf("enter a number :");
scanf("%d",&x);
for(i=2;x>1;i++)
{
while(x%i==0)
{
printf("%d ",i);
x=x/i;
}
}
}
