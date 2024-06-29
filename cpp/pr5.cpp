#include<iostream>
using namespace std;
int main(){
int sec,h,m,s;
cout<<"enter seconds  ";
cin>>sec;
h=sec/3600;
m=(sec-(h*3600))/60;
s=(sec-(h*3600)-(m*60));
cout<<"the converted time is : " <<h<<":"<<m<<":"<<s;
return 0 ;
}