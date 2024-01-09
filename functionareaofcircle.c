#include<stdio.h>
float areaofcircle(float r)
{
    return (3.14*r*r);
}
int main()
{
    float r;
    printf("Enter the number");
    scanf("%f", &r);
    float result=areaofcircle(r);
    printf("%f", result);

    return 0;
}