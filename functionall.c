#include<stdio.h>
int subtract(int a, int b, int c)
{
    return(a-b-c);
}
int addtition(int a, int b)
{
    return(a+b);
}
int multiply(int a, int b)
{
    return(a*b);
}
int divide(int a, int b)
{
    return(a/b);
}
int main()
{
    int result=subtract(200,100,50);
    printf("%d\n",result);
    
    int result2=addtition(20000,577);
    printf("%d\n", result2);

    int result3=multiply(34,45);
    printf("%d\n",result3);
    
    int result4=divide(20,5);
    printf("%d\n", result4);

    return 0;
}