// Write a program using while loop to find the first n numbers 
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d", &n);
    int i=0;
    int sum=0;
    while(i<=10)
    {
        sum = sum +i;
        i++;
         
    }
    printf("%d", sum);
   
    return 0;

}