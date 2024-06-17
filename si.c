#include<stdio.h>



void si(){
    float p=3.4;
    float r=5.2;
    float t=6;
    float si=p*r*t/100;
    printf("the si of p=%f r=%f t=%f is %f ",p,r,t,si);

}


float si2(){
    float p=3.4;
    float r=5.2;
    float t=6;
    float si=p*r*t/100;
    return si;
}

int main(){
printf("using void \n");
si();

float total;
total=si2();
printf("\n using 2nd way \n");
printf("the total amount is : %f " ,total );

return 0;
}