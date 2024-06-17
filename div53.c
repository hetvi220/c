#include<stdio.h>
int main(){
int a;
printf("enter a number:");
scanf("%d",&a);
if(a%5==0 && a%3==0){
printf("the number %d is divisble 5 and 3" , a);
}else{
printf("the number %d is not divisible by 5 and 3", a);
}
return 0 ;
}