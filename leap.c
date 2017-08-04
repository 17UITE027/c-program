#include<stdio.h>
void main()
{
int yr;
printf("Enter the year to be check leap or not");
scanf("%d",&yr);
if(yr%400==0 || yr%4==0)
{
printf("The year is leap year");
}
else if(yr%100==0)
{
printf("This is not a leap year");
}
else
{
printf("This is not leap year");
}
}
