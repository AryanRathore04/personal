#include<iostream>
using namespace std;
class Account
{
    public:
    string name;
    int AcNo;
    float Balance;
    
    Account(string name, int AcNo, float Balance)
    {
        this-> name = name;
        this-> AcNo = AcNo;
        this-> Balance = Balance;
    }
    
};

int main()
{
    Account a1("Superman",123455,20233.65);
    cout<<"Name is = "<<a1.name<<"\nAccount Balance = "<<a1.Balance<<"\nAccount Number = "<<a1.AcNo;
    return 0;
}