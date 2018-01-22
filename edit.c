#include<stdio.h>
int main()
{
int a[100],i,n,temp[100];
printf("Enter the total number of elements \n");
scanf("%d",&n);
printf("Enter the elements \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	if(a[i] > a[i+1])
	{
	void swap()
	{
		temp[i]=a[i];
		a[i]=a[i+1];
		a[i+1]=temp[i];
	}
	}
}

for(i=0;i<n;i++)
{
	printf("%d",temp[i]);
}
}
