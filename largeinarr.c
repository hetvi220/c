#include<stdio.h>
int main(){

int i,n;
printf("enter the number of elements you want in array :  ");
scanf("%d",&n);
int large[n];
int max;

for(i=0;i<n;i++){
    printf("enter the element of position %d in array : ",i);
    scanf("%d",&large[i]);
}

max=large[0];

for(i=0;i<n;i++){
    if(large[i]>max){
        max=large[i];
    }
}

printf("the largest number is : %d at position %d ",max,i);

return 0;

}