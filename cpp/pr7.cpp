#include<iostream>
using namespace std;
int main(){
char a;
cout<<"enter any alphabet :  ";
cin>>a;
if(a>=65 && a<=90){
    cout<<a<<"="<<char(a+32)<<endl;
}else if(a>=97 && a<=122){
    cout<<a<<"="<<char(a-32)<<endl;
}else{
    cout<<"enter valid alphabet ";
}
return 0 ;
}