#include<stdio.h>
int main()
{
int min,hr,re_min;
printf("Enter the minutes \n");
scanf("%d",&min);
hr=min/60;
re_min=min%60;
printf("%d %d",hr,re_min);
}
