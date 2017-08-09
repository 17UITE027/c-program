#include<stdio.h>
void main()
{
int n,fact,ans=1;
printf("Enter the number");
scanf("%d",&fact);
if(fact==0)
{
printf("the factorial value is 1");
}
else
{
for(n=1;n<=fact;n++)
{
	ans=ans*n;
}
printf("The factorial value is %d",ans);
}}
