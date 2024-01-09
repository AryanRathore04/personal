#include<stdio.h>
int subtract(int a, int b)
{
    return (a-b);
}
int sum(int a, int b)
{
    return (a+b);
}
int multiply(int a, int b)
{
    return (a*b);
}
int divide(int a, int b)
{
    return(a/b);
}
int main()
{
    char operation;
    int a,b;
    printf("Enter the number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);

    printf("For addtion enter +\n,For subtration enter -\n, For divide enter /\n,For multiply enter *\n");
    scanf(" %c",&operation);
    switch(operation)
    {
        case '+':
        printf("%d",sum(a,b));
        break;
        case '-':
        printf("%d",subtract(a,b));
        break;
        case '*':
        printf("%d",multiply(a,b));
        break;
        case'/':
        printf("%d",divide(a,b));
        break;        
    }
    return 0;
}