#include<stdio.h>
int main(){
float a,b;
printf("enter the first number :");
scanf("%f",&a);
printf("enter the second number :");
scanf("%f",&b);
if(a>b){
printf("A=%f is the greater of the two.", a);
}else{
printf("B=%f is the greater of the two.", b);
}
return 0 ;
}