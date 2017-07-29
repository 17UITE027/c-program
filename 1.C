
#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  printf("Enter the number to be check");
  scanf("%d",&a);
  if(a<0)
  {
    printf("The given number is negative number");
  }
  else if(a>0)
  {
    printf("The given number is positive number");
  }
  else
  {
    printf("The given number is Zero");
  }
  getch();
}
