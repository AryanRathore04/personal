//Write a program to print first N natural numbers. (N is given by user)
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    for(int i; i<=n; i++)
    {
        printf("%d", i);
    }
    return 0;
}