#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number to check the number is divisible by 5 or not\n");
    scanf("%d", &a);
    if(a%5==0)
    {
        printf("This number is divisible by 5");
    }
    else
    {
        printf("This number is not divisible by ");
    }
    return 0;
}