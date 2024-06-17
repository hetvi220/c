#include<stdio.h>



void area1(){
    float h=3.4;
    float b=5.2;
    float area=b*h/2;
    printf("area of triangle of heioght %.2f and base %.2f is : %.2f ",h,b,area);

}


float area2(){
    float h=3.4;
    float b=5.2;
    float area=b*h/2;
    return area;
}

int main(){
printf("using void \n");
    area1();

float total;
total=area2();
printf("\n using 2nd way \n");
printf("the area of triangle is: %f " ,total );

return 0;
}