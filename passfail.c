#include<stdio.h>
int main(){
float a;
printf("enter your marks:");
scanf("%f",&a);
if(a>33.0){
printf("congratulations you are pass with %.2f percentage" , a);
}else{
printf("sorry you failed with %.2f percentage\nbetter luck next time", a);
}
return 0 ;
}