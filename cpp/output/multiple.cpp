#include<iostream>
using namespace std;

class base{
    protected: 
    int a;
    public:
    void A(){
        cout<<"enter a: ";
        cin>>a;
    }
    
    public:
    void B(){
        cout<<"enter b: ";
        cin>>b;
    }
};

class base2: public base,public base1{
    protected: 
    int c;
    public:
    void C(){
        cout<<"enter C: ";
        cin>>c;
    }

    void product(){
        cout<<"a*b = "<<a*b<<endl;
        cout<<"a*c ="<<a*c;
    }
};
int main()
{
    base2 obj;
    obj.A();
    obj.B();
    obj.C();
    obj.product();
    

    return 0;
}