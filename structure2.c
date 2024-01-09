#include<stdio.h>
struct student
{
    int roll_number;
    float marks;
    char name[30];
};
int main()
{
    struct student s1 = {12,589,"Aryan"};
    printf("roll number of student is=%d\n", s1.roll_number);
    printf("Marks of student is=%f\n", s1.marks);
    printf("Name of a student is=%s\n", s1.name);
    return 0;

}