#include<stdio.h>
float si(float amount, float rate, float time)
{
    return amount*rate*time/100;
}
int main()
{
    float amount,rate,time;
printf("Enter the number");
scanf("%f %f %f", &amount, &rate, &time );
float result=si(amount,rate,time);
printf("%f", result);
return 0;
}