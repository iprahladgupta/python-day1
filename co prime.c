void main()
{
int i,x,y,min;
printf("enter two numbers:");
scanf("%d %d",&x,&y);
min=x<y?x:y;
for(i=x;i<=min;i++)
{
if(i%x==0&&i%y==0)
break;
}
if(i==min+1)
printf("co-prime numbers");
else
printf("not co-prime numbers");
}
