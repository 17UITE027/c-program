#include<stdio.h>
int main()
{
int num,n[100],avr=0,i,sum=0;
scanf("%d",&num);
for(i=0;i<num;i++)
{
    scanf("%d",&n[i]);
}
for(i=0;i<num;i++)
{
    sum=sum+n[i];
}
avr=sum/num;
printf("The average of the number is %d",avr);
}
