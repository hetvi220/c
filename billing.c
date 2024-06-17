#include<stdio.h>
int main()
{
float rate,qty,amt,disc,bill_amt,gst,net_amt;
printf("enter your rate : ");
scanf("%f",&rate);
printf("enter your qty : ");
scanf("%f",&qty);
amt = rate * qty;
disc = amt*12/100;
bill_amt = amt-disc;
gst = 18*bill_amt ;
net_amt = bill_amt+gst ;
printf("rate\tqty\tamt\tdisc\tbilla_amt\tgst\tnet_amt\n");
printf("%f\t%f\t%f\t%f\t%f\t%f\t%f",rate,qty,amt,disc,bill_amt,gst,net_amt);
 



return 0;
}