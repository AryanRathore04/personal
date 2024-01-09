#include<stdio.h>
float addtion(float a , float b)
{
    return a + b;
}
float subtract(float a , float b)
{
    return a - b;
}
float multiplication(float a , float b)
{
    return a * b;
}
float divide(float a , float b)
{
    return a / b;
}

int main()
{
    float num1, num2, result;
    int choice;
    do
    {
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5)\n");
        scanf("%d", &choice);
        
        if(choice<1 || choice>5)
        {
            printf("Invalid choice. Please choose a option between 1 to 5\n");
            continue;
        }
        if(choice == 5)
        {
            printf("Exit to the Program\n");
            break;
        }

        printf("Enter the Two Numbers\n");
        scanf("%f %f", &num1 , &num2);

       switch(choice)
       {
        case 1:
        result = addtion(num1, num2);
        printf("Result = %f", &result);
        break;

        case 2:
        result = subtract(num1, num2);
        printf("Result = %f", &result);
        break;

        case 3:
        result = multiplication(num1, num2);
        printf("Result = %f", &result);
        break;

        case 4:
        result = divide(num1, num2);
        printf("Result = %f", &result);
        break;
       }

       printf("Do you want to perform another operation? (1: Yes, 0: No): ");
       scanf("%d", &choice);

    } while (choice != 0);

    return 0;
    
}