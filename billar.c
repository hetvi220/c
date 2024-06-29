#include<stdio.h>
struct customer{
    int qty,amt,rate,dis,bill_amt,gst,net_amt;
};
	
int main(){

struct customer a[2];

for(int i=0;i<2;i++){

    printf("enter quantity by %d customer = ",i);
    scanf("%d",&a[i].qty);
     printf("enter rate by %d customer = ",i);
    scanf("%d",&a[i].rate);
    a[i].amt=a[i].qty*a[i].rate;
    printf("amount for customer %d = %d \n",i,a[i].amt);
    a[i].dis=0.05*a[i].amt;
    printf("discount for %d customer is = %d \n",i,a[i].dis);
    a[i].bill_amt=a[i].amt-a[i].dis;
    printf("the bill amount for %d customr is : %d\n",i,a[i].bill_amt);
    a[i].gst=0.18*a[i].bill_amt;
    printf("the gst amount for %d customr is : %d\n",i,a[i].gst);
    a[i].net_amt=a[i].bill_amt+a[i].gst;
    printf("the net amount for %d customr is : %d\n",i,a[i].net_amt);
    }

return 0 ;
}




