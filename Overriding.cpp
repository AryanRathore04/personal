#include<iostream>
using namespace std;

class cal
{
    public:
    void find(int a)
    {
        cout<<"Square is: "<<a*a;
    }
};

class cal2 : public cal
{
    public:
    void find(int a)
    {
        cout<<"Cube is: "<<a*a*a;
    }
};

int main()
{
cal2 a;
a.find(5);
return 0;
}
