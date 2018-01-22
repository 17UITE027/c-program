#include<stdio.h>
int main()
{
int a[100],i,n;
printf("Enter the number of elements \n");
scanf("%d",&n);
printf("Enter the elements \n");
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	printf("\n %d %d",a[i],i);
}
}
