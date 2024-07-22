#include<iostream>
using namespace std;

class hello{
    public:
    hello(){
        cout<<"default construction is callled"<<endl;
    }

    ~hello(){ 
        cout<<"default callled"<<endl;   
    }
    hello(int a){
        cout<<"pera construction is callled"<<endl;
    }
    hello(char b){
        cout<<"default construction is callled"<<endl;
    }
};

int main(){
class hello a,b(10),c('A');

return 0;
}
