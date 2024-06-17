#include<stdio.h>



void c_area(){
    float pi=3.14;
    float r=3;
    float area=pi*r*r;
    printf("area of circle of rad %.2f is : %.2f ",r,area);

}


float area(){
      float r=2; 
      float pi=3.14;
      float area;
      area=pi*r*r;
      return area;
}

int main(){
printf("using void \n");
    c_area();

float total;
total=area();
printf("\n using 2nd way \n");
printf("the area of circle is: %f " ,total );

return 0;
}