//Write a program using While loop to find first n even number and the number given by the user
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    int i=0;
    while(i<n)
    {
        if(i%2==0)
        {
        printf("%d\n", i);
        }
        i=i+1;
    }
    return 0;
}