#include <stdio.h>
int main()
{
    int a, i, sum = 0;
    
    printf(" ");
    scanf("%d",&a);

    for(i=1; i <= a; ++i)
    {
        sum = sum+i;  
    }
    printf("%d\n",a);

    printf("%d\n",sum);

    return 0;
}
