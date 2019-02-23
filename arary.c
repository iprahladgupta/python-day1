#include<stdio.h>
int main()
{
int i,j;
int array[2][3]={{10,80,90},{45,7,9}};
for(i=0;i<2;i++)
{
    for(j=0;j<3;j++)
    {

printf(" array[i][j]=%d %d\n",i,j,array[i][j]);
}
}
return 0;

}
