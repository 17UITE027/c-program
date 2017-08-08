#include<stdio.h>
void main()
{
int i,a,b;
printf("Enter the range to display odd numbers");
scanf("%d%d",&a,&b);
for(i=a;i<=b;i++)
{
if(i%2==1)
{
printf("\n%d",i);
}
}}
