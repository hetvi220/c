#include<stdio.h>
int main()
{
int n,i,sum;
sum=0;
 printf("enter length of array:  ");
 scanf("%d",&n);
 int number[n];
 
for(int i=0;i<n;i++){
     printf("enter element of %d position: ",i);
    scanf("%d",&number[i]);
}

for(int i=0;i<n;i++){
     printf("%d\t",number[i]);
     if(i%2==1){
    sum+=number[i];
     }
     
}
printf("\ntotal sum of odd position: %d",sum);








return 0;
}