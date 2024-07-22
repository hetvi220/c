
#include<iostream>
using namespace std;
int main(){

int arr[3][2];
int sum=0;
for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        cout<<"enter element of "<<i<<" row and "<<j<<" column : ";
        cin>>arr[i][j];
    }
}

for(int i=0;i<3;i++){
    for(int j=0;j<2;j++){
        cout<<arr[i][j]<<"\t";
        sum+=arr[i][j];
    }
    cout<<" \n";
}
cout<<"the sum of all elements is : "<<sum;


return 0;
}