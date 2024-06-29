#include<iostream>
using namespace std;
int main(){
int rate,qty,amt,dis,bill,gst,net;
cout<<"enter rate and qty :";
cin>>rate>>qty;
amt=rate*qty;
dis=amt*5/100;
bill=amt-dis;
gst=18*bill/100;
net=bill+gst;

cout<<"rate\tqty\tamt\tdis\tbill\tgst\tnet\t"<<endl;
cout<<rate<<"\t"<<qty<<"\t"<<amt<<"\t"<<dis<<"\t"<<bill<<"\t"<<gst<<"\t"<<net;
return 0 ;
}