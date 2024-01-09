#include<iostream>
using namespace std;
class Student
{
    public:
    string name = "Aryan";
    int RollNo = 1244;
    float marks = 50.54;
    
};
int main()
{
    Student s1;
    cout<<s1.name<<endl<<s1.RollNo<<endl<<s1.marks<<endl;
  
    
    
    return 0;
}