#include<stdio.h>
int main(){
int a;
printf("enter a number:");
scanf("%d",&a);
if(a%5==0){
printf("the number %d is a multiple of 5." , a);
}else{
printf("the number %d is not a multiple of 5.", a);
}
return 0 ;
}