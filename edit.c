#include<stdio.h>
int main()
{
int a[100],i,n,temp[100],j;
printf("Enter the total number of elements \n");
scanf("%d",&n);
printf("Enter the elements \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;++i)
{
	for(j=i+1;j<n;++j)
{
	if(a[i] > a[j])
	{

		temp[i]=a[i];
		a[i]=a[j];
		a[j]=temp[i];
	}
	}
}

for(i=0;i<n;i++)
{
	printf("%d",a[i]);
}
}
