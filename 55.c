# set6
#include<stdio.h>
int main()
{
int a,b,n;
printf("\nenter 2 number");
scanf("%d%d\n",&a,&b);
n=a*b;
if(n%2==0)
{
printf("\nproduct is even");
}
else
{
printf("\nproduct is odd");
}
return 0;
}
