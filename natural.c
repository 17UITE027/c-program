#include<stdio.h>
void main()
{
int a,i,s=0;
printf("Enter the value of A");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
s=s+i;
}
printf("The sum of natural number is %d",s);
}
