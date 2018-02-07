
#include<stdio.h>
int main()
{
  int a;
  printf("Enter the number to be check");
  scanf("%d",&a);
  if(a<0)
  {
    printf("Negative");
  }
  else if(a>0)
  {
    printf("Positive");
  }
  else
  {
    printf("Zero");
  }
}
