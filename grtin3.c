#include<stdio.h>
int main(){
int a,b,c;
printf("enter the first number: ");
scanf("%f",&a);
printf("enter the second number: ");
scanf("%f",&b);
printf("enter the third number: ");
scanf("%f",&c);
if(a>b && a>c){
printf("%f is the greatest of the three",a);
if(b>c){
printf("%f is the greatest of all." , b);
}else{
printf("%f is the greatest of all " , c);
}
return 0 ;
}