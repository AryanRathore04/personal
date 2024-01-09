#include<stdio.h>
int main()
{
    int ATM_Pin[3] = {1234, 9812, 1123};

    int *Hacker= &ATM_Pin[2];
    printf("Before Hack \n%d", ATM_Pin[2]);
    *Hacker= 1111;
    printf("\n After Hack \n%d", ATM_Pin[2]);
    return 0;
}