#include <stdio.h>

void Trslip();
void MiniStatement();
void Credit();
void debit();
void Login();
void changepin();
static double Balanace = 1200000;
int pin = 2712,,temp,tr;
double Mini[2000,amount];
int main()
{
    return 0;
}
void Login()
{
    printf("Welcome to Bandhan Bank...\n Please enter your Pin");
    scanf("%d",&temp);
    if(temp==pin)
    {
        Menu();
    }
    else
    {
        printf("Invalid pin");
        Login();
    }
    
}
void Menu()
{
    printf("\n Please enter your choice");
    printf("\n1.Credit \n2.Debit \n3.Mini Statement \n4.Change Pin \n5.Exit");
    scanf("%d",&temp);
    switch(temp)
    {
        case 1: Credit();
        break;
        
        case 2: Debit();
        break;
        
        case 3: MiniStatement();
        break;

        case 4: Changepin();
        break;

        case 5: exit(0);
        break;
        
        default: printf("Invalid Option");

    }
}

void Credit()
{
    printf("Enter an amount you want to credit");
    scanf("%f", &amount);
    Balance+=amount;
}