#include<stdio.h>
int main()
{
int i=1,sum=0,n;
printf("Enter the range to produce the sum of num");
scanf("%d",&n);
while(i<=n)
{
sum=sum+i;
i++;
}
printf("The sum of numbers is %d",sum);
}
