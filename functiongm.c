#include<stdio.h>
void goodmorning()
{
    printf("Good morning");
}
void goodAfternoon()
{
    printf("Good Afternoon");
}
void goodevening()
{
    printf("Good evening");
}
void goodnight()
{
    printf("Good night");
}
int main()
{
    int time;
    printf("Enter the time");
    scanf("%d",&time);
    switch (time)
    {
        case 8:
        goodmorning();
        break;
        case 12:
        goodAfternoon();
        break;
        case 5:
        goodevening();
        break;
        default:
        goodnight();
    }
}