#include<stdio.h>
int main()
{
  int arr[2][2];
  int sum;
  sum=0;

 for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("enter element of row %d and column %d : ",i,j);
        scanf("%d",&arr[i][j]);
    }
 } 
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d\t",arr[i][j]);
        sum=sum+arr[i][j];
    }
    printf("\n");
}
printf("the sum of all elements is : %d \n " , sum);

int ar[3][3];
 for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("enter element of row %d and column %d :",i,j);
        scanf("%d",&ar[i][j]);
    }
 } 
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d\t",ar[i][j]);
        sum=sum+ar[i][j];
    }
    printf("\n");
}
printf("the sum of all elements is : %d " , sum);
 return 0;
}