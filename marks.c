#include<stdio.h>
int main()
{
float a,b,c,d;

printf("enter your maths marks :");
scanf("%f", &a);
printf("enter your phy marks :");
scanf("%f" , &b) ;
c=a+b;
d=c*100/200;
printf("your total marks are :%f\n" , c);
printf("your percentage are : %f", d);



return 0;
}