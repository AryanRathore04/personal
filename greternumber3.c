#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number to find which number is bigger");
    scanf("%d%d%d", &a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
        printf("a is greater");
        }
        else
        {
            printf("c is greater");
        }
    }
    else
    {
        printf("b is greater");
    }
    return 0;
    
    
}