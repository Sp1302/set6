# set6
#include<stdio.h>
int main()
{
int a,b,t;
printf("\nenter 2 numbers");
scanf("%d%d\n",&a,&b);
t=a;
a=b;
b=t;
printf("%d%d\n",a,b);
return 0;
}
