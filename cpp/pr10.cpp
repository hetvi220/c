#include<iostream>
using namespace std;
int main(){
int i;
char a;
cout<<"enter alphabet :   ";
cin>>a;
if(int(a)>=97 && int(a)<=122){
    for(i=97;i<=int(a);i++){
        cout<<char(i)<<"\t";
    }
}
if(int(a)>=65 && int(a)<=90){
    for(i=65;i<=int(a);i++){
        cout<<char(i)<<"\t";
    }
}
return 0 ;
}