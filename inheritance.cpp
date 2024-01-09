#include <iostream>
using namespace std;
class smartphone{
    protected:
    int ncamera;
    string btype;
    string processor;
    int display;
};
class Vivo:public smartphone{
    public: void setProp(int c,string by, string pro, int d){
        ncamera = c;
        btype = by;
        processor = pro;
        display = d;
    }
    
        public : void getProp()
    {
        cout<<"Oppo Camera = "<<ncamera<<endl;
        cout<<"Oppo Battery Type = "<<btype<<endl;
        cout<<"Oppo Processor = "<<processor<<endl;
        cout<<"Oppo display Size = "<<display<<endl<<endl;
    }
   
    
};
class oppo:public smartphone{
    public: void setProp(int c,string by, string pro, int d){
        ncamera = c;
        btype = by;
        processor = pro;
        display = d;
    }
    
    public : void getProp()
    {
        cout<<"Vivo Camera = "<<ncamera<<endl;
        cout<<"Vivo Battery Type = "<<btype<<endl;
        cout<<"Vivo Processor = "<<processor<<endl;
        cout<<"Vivo display Size = "<<display<<endl<<endl;
    }
};

int main()
{
    Vivo v1;
    v1.setProp(3,"li-ion","snapdragon 888",55);
    v1.getProp();
    
    oppo p1;
    p1.setProp(2,"Li-ion","Mediatech 700", 65);
    p1.getProp();
    return 0;
}