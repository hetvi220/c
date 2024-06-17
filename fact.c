#include<stdio.h>
#include<string.h>
int main()
{
int i,fact,n;
fact=1;
printf("enter number:");
scanf("%d",&n);
for(i=1;i<=n;i++){
    fact=fact*i;
}
printf("the factorial is : %d",fact);
return 0;
}