#include<stdio.h>
int sum(int a, int b)
{
    return a+b;
}
int main()
{
int result=sum(10,20);
int result2=sum(100,200);
int result3=sum(1000,3000);
printf("%d\n %d\n %d\n", result, result2, result3);
return 0;
}