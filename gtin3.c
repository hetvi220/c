#include<stdio.h>
int main(){
int a,b,c;
printf("enter your 1st number:");
scanf("%d",&a);
printf("enter your 2nd number:");
scanf("%d",&b);
printf("enter your 3rd number:");
scanf("%d",&c);
if(a>b && a>c){
printf("the number A= %d is the greatest .", a);
}else if(b>c){
printf("the number B= %d ids the greatest.", b);
}else{
printf("C=%d is the greates t.",c);
}
return 0 ;
}