#include<stdio.h>
void main()
{
int a,b,c;
printf("Check the Biggest number you entered");
printf("\n Enter the three number as a,b & c");
scanf("%d%d%d",&a,&b,&c);
if( a>b && a>c )
{
printf("The a=%d is the largest number",a);
}
else if(b>c)
{
printf("The b=%d is the Largest number",b);
}
else
{
printf("The c=%d is the largset number",c);
}
}
