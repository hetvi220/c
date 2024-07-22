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
};
class base1 : public base{
    
    protected:
    int b;
    public:
    void B(){
        cout<<"enter b: "<<endl;
        cin>>b;
        cout<<"sum is : " << a+b<<endl;
    }
};

class base2:public base1{
int c;
public:
void C(){
      cout<<"enter C: "<<endl;
      cin>>c;
      cout<< " sum of a b c is :" << a+b+c<<endl;
}

void product(){
    cout<<"A*B*C = "<<a*b*c;
}};
int main(){
    base2 obj;
    obj.A();
    obj.B();
    obj.C();
    obj.product();
       return 0;
}



