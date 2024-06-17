#include<stdio.h>
int main(){
float a;
printf("enter a number:");
scanf("%f",&a);
if(a>=0){
printf("the number %f is a positive number ." , a);
}else{
printf("the number %f is negative number." , a);
}
return 0 ;
}