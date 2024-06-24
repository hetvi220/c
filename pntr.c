#include<stdio.h>
int main()
{
int a,b;
a=12;
b=20;

int *p;
int *q;
 p=&a;
q=&b;

*p = *p + *q;
*q = *p - *q;
*p = *p - *q;

printf("after swapping :\n %d \n %d " , *p,*q); 

return 0 ; 
}



 
