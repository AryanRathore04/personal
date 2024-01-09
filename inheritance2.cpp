#include<iostream>
using namespace std;

class Atul
{
    public:
    void bike()
    {
        cout<<"Pulsar"<<endl;
    }
};

class Aryan : public Atul
{
    
};

int main()
{
    Aryan a;
    a.bike();
    
    Atul x;
    x.bike();
    
    return 0;
}