int fact(int);
int main()
{
int p,x;
printf("enter number:");
scanf("%d",&p);
x=fact(p);
printf("the factorial is:%d",x);
}
int fact(int n)
{
int i,f=1;
for(i=1;i<=n;i++)
f=f*i;
return(f);
}
