#include<stdio.h>
int main(){

float a,b;
char operator;

printf("enter number a and b  : ");
scanf("%f  %f ",&a,&b);


printf("enter the operator you want to perform : ");
scanf("%c",&operator);


switch (operator)
{
case '+':
printf("the sum is : %f ",a+b);
break;

case '-':
printf("the difference is : %f ",a-b);
break;

case '*':
printf("the product is : %f ",a*b);
break;

case '/':
printf("the division is : %f ",a/b);
break;

default: 
printf("enter a valid operator");
}

return 0;
}                                                                                              
