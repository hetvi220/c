#include<stdio.h>
int main(){
float a,total,final;
printf("enter your units consumed:");
scanf("%f",&a);

if(a<=100){
total=a*0.60+50;
	if(total>300){
	final= 15*total/100+total;
	printf("the final amount to pay is: %f " ,final);  
	}else{
	printf("the final amount to pay is: %f " ,total);}
	}
	else if(100<a && a<=200){
total=a*0.80+50;
	if(total>300){
	final= 15*total/100+total;
	printf("the final amount to pay is: %f " ,final);  
	}else{
	printf("the final amount to pay is: %f " ,total);}
	}
	else if(200<a && a<=300){
total=a*0.90+50;
	if(total>300){
	final= 15*total/100+total;
	printf("the final amount to pay is: %f " ,final);  
	}else{
	printf("the final amount to pay is: %f " ,total);}
	}
	else{
		printf("bill failed ");
	}
	
	




return 0 ;
}