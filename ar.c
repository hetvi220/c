#include<stdio.h>
int main()
{
int n,i;
printf("enter the length of array: ");
scanf("%d",&n);
int number[n];
for(i=0;i<n;i++){
printf("enter the value of %d position:" , i);
scanf("%d",&number[i]);
}
for(i=0;i<n;i++){
printf("%d\t" ,number[i]);

}

	
return 0;
}