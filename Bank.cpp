#include<iostream>
using namespace std;
 class Bank
 {
    private: int accbal = 38000;
    public: Bank()
    {
        cout<<"Welcome to Error Bank"<<endl;
    }
    
    public: void Cashier(int cash)
    {
        accbal = accbal + cash;

        cout<<"New account balance is: "<<accbal;
    }

 };
 
 int main()
 {
    Bank b;
    b.Cashier(5000);
 }

