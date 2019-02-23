int areaofcircle(int);
int main()
{
int r,y;
printf("enter the radius of circle:");
scanf("%d",r);
y=areaofcircle(r);
printf("area of circle:%d",y);
}
int areaofcircle(int)
{
int r;
float area;
float pi=3.14;
area=pi*r*r;
return(area);
}
