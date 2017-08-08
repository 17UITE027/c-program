#include<stdio.h>
void main()
{
int a,b,i;
printf("Enter the range to print even numbers");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
if(i%2==0)
{
printf("\n%d",i);
}
}
}
