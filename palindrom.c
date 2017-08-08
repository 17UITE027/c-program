#include<stdio.h>
void main()
{
int n,rev=0,rem,data;
printf("Enter the number\n");
scanf("%d",&n);
data=n;
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n=n/10;
}
if(data==rev)
{
printf("The given number is palindrome");
}else
{
printf("The given number is not a palindrome");
}
}
