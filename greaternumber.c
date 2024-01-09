#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number\n");
    scanf("%d%d",&a,&b );
    if(a>b)
    {
        printf("a is greter than b");
    }
    else
    {
        printf("b is greater than a");
    }
    return 0;
}