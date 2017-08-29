#include<stdio.h>
int main()
{
int m,i,n=0;
printf("Enter the number M ");
scanf("%d",&m);
printf("The multiplication table was\n");
for(i=1;i<=10;i++)
{
n=i*m;
printf("\n%d*%d=%d",i,m,n);
}
}
