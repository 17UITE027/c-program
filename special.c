#include<stdio.h>
int main()
{
    char str[200];
    int n=0, i;
    printf("Enter the String\n");
    scanf("%[^\n]s", str);
    for (i = 0;str[i] !=0;i++)
    {
       if (str[i] == '*' || str[i] == '&' || str[i] == '#' || str[i] == '(' || str[i] == ')')
       n++;    
    }
    printf("number of words in given string are %d\n", n);
}
