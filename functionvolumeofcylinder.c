#include<stdio.h>
#define pi 3.14
float cylindervolume(float r, float h)
{
    return pi*r*r*h;
}
int main()
{
    float r, h;
    printf("Enter the number");
    scanf("%f %f", &r,&h);
    float result=cylindervolume(r,h);
    printf("%f",result);
    return 0;

}