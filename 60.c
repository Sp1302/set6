# set6
#include <stdio.h>
#include<string.h>
void main()
{
int x=0,y=1,z,i,n;
scanf("%d\n",&n);
for(i=1;i<=n;i++)
{
printf("%d\n",x);
z=x+y;
x=y;
y=z;
}
getch();
}
