#include<iostream>
using namespace std;
class Account
{
    public:
    string name;
    int AcNo;
    float Balance;
    
    Account(string n, int ac, float b)
    {
        name = n;
        AcNo = ac;
        Balance = b;
    }
    
};

int main()
{
    Account a1("Superman",123455,20233.65);
    cout<<"Name is = "<<a1.name<<"\nAccount Balance = "<<a1.Balance<<"\nAccount Number = "<<a1.AcNo;
    return 0;
}