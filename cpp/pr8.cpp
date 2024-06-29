#include<iostream>
using namespace std;
int main(){
    int i,sum,sumo,n;
    cout<<"enter a number  ";
    cin>>n;
    sum=0;
    sumo=0;
    for(i=0;i<=n;i++){
        if(i%2==0){
            cout<<"the number "<<i<<" is even"<<endl;
            sum+=i;
        }
    }
     for(i=0;i<=n;i++){
        if(i%2==1){
            cout<<"the number "<<i<<" is odd"<<endl;
            sumo+=i;
        }
    }
  cout<<"the sum of even numbers is :  "<<sum<<endl;
  cout<<"the sum of odd numbers is :  "<<sumo;
return 0 ;
}