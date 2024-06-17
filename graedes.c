#include<stdio.h>
int main()
{
float x,y;
printf("enter x : ");
scanf("%f",&x);
printf("enter y : ");
scanf("%f",&y);
if(x<=2000 || x>=3000){
printf("%d",&x);}
if(x<=500 || y>=100){
printf("%d",&y);
}else{
printf("bye");	
}
return 0;
}