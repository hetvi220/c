#include<stdio.h>
int main()
{
int sec,s,m,h;  
printf("enter the number of seconds : ");
scanf("%d",&sec);
h=sec/3600;
m=sec/60;
s=sec-m;
printf("the time is: %d:%d:%d " , h,m,s);




   
return 0;
} 