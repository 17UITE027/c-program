#include<stdio.h>
int main()
{
int num,c=0;
printf("Enter the number");
scanf("%d",&num);
while(num)
{
num=num/10;
c++;
}
printf("The digits of number %d",c);
}
