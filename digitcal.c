#include<stdio.h>
#include<string.h>
int main()
{
char s[100],i,count;
printf("Enter the string \n");
gets(s);
for(i=0;s[i]!=NULL;i++)
{
if(s[i] >= '0' && s[i] <='9')
{
count++;
}
}
printf(" \n %d",count);
}
