#include<stdio.h>
 int main()
 {
    int score;

    printf("Enter the marks in number");
    scanf("%d", &score);

    if(score >=90 && score < 100)
    {
        printf("Grade: A\n");
        printf("Excellent! Keep up the good work.\n");
    }
    else if (score >= 80 && score < 90)
    {
        printf("Grade: B\n");
        printf("Good job! You're doing well.\n");
    }
    else if (score >= 70 && score <80)
    {
        printf("Grade: C\n");
        printf("Satisfactory. There's room for improvement.\n");
    }
    else if (score >=60 && score <70)
    {
        printf("Grade: D\n");
        printf("You need to work harder to pass.\n");
    }
    else if (score >=0 && score <60)
    {
        printf("Grade: F\n");
        printf("Unfortunately, you failed. Seek help and try again.\n");
    }
    else
    {
        printf("Invalid score! Please enter a score between 0 and 100.\n");
    }
    return 0;
 }