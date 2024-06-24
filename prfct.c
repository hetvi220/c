#include <stdio.h> 
void  num(int n)
{
int i,sum;
sum=0;
  printf("the divisiors are:" );
  for(i=1;i<n;i++){
    if(n%i==0){
        sum+=i;
    printf(" %d",i);
    }}
     printf("\nthe sum of divisors is: %d \n" , sum ); 
if(sum+n/2==n){
    printf("the number %d is a perfect number " , n);
}else{
    printf("the number %d is not a perfect number " , n);
}}
int main(){
num(46);
return 0;
}