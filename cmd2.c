main(int argc,char*argv[])
{
int a;
a=string_to_int(argv[i]);
printf("a=%d",a);
getch();
}
int string_to_int(char*str)
{
int i,x;
for(x=0,i=0;str[i];i++)
{
if(str(i)>='0'&& str[i]<'a')
x=x*10+(str(i)-48);
else
break;

}
return(x);
}
