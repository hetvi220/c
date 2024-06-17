#include<stdio.h>



void area1(){
    float side=3;
    float area=side*side;
    printf("area of square of side %.2f is : %.2f ",side,area);

}


float area2(){
     float side = 5.0;
      float area;
      area=side*side;
      return area;
}

int main(){
printf("using void \n");
    area1();

float total;
total=area2();
printf("\n using 2nd way \n");
printf("the area of square is: %f " ,total );

return 0;
}