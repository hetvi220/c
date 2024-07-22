#include<iostream>
using namespace std;

class base{
    private:
    int a =  10;
    protected :
    int b = 30;
    public:
    int c=34;

    };
    class derived : public base{
        public: 
        void print(){
            cout<<"b= "<<b<<endl;
            cout<<"c= "<<c<<endl;
            
        }
    };


int main()
{
    derived obj;
    
    obj.print();

    return 0;
}