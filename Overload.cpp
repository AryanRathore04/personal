#include<iostream>
using namespace std;

class CalArea
{
    public:
    void Area(double r)
    {
        cout<<"Area of circle is: "<<3.14*r*r<<endl;
    }
    
    void Area(int l, int b)
    {
        cout<<"Area of rectangle is: "<<l*b<<endl;
        
    }
    
    void Area(int s)
    {
        cout<<"Area of Square is: "<<s*s<<endl;    
    }
};

int main()
{
CalArea obj;
obj.Area(3.5);
obj.Area(4,5);
obj.Area(5);
    return 0;
}