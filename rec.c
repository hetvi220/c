#include<stdio.h>



void area1(){
    float l=3.4;
    float b=5.2;
    float area=l*b;
    printf("area of rectangle of length %.2f and breadth %.2f is : %.2f ",l,b,area);

}


float area2(){
    float l=3.4;
    float b=5.2;
    float area=l*b;
    return area;
}

int main(){
printf("using void \n");
    area1();

float total;
total=area2();
printf("\n using 2nd way \n");
printf("the area of rectangle is: %f " ,total );

return 0;
}