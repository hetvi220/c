#include<stdio.h>
int main()
{
int i , n , sum; 
i=1;
sum=0;
printf("enter number :");
scanf("%d",&n);
while(i<=n){
	if(i%2==0){
		sum = sum+i;
		printf("%d ",sum);
		}
	i++;
}		
	
return 0;
}