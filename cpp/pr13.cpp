#include<iostream>
using namespace std;

int main(){
int u,l,d;
u=0;
l=0;
d=0;
int ar[5][5];

for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cout<<"enter element of "<<i<<"row and "<<j<<" column : ";
        cin>>ar[i][j];
}
}


for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cout<<ar[i][j]<<"\t";
    if(i>j){
            l= l+ar[i][j];
        }else if(i<j){
              u= u+ ar[i][j];
        }else{
         d=d+ar[i][j];
        }
}
cout<<"\n";
}
cout<<"the sum of upper triangle is "<<u<<endl;
cout<<"the sum of lower triangle is "<<l<<endl;
cout<<"the sum of diagonal is "<<d;

return 0;
}