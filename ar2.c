#include<stdio.h>
int main()
{
int n1,i,n2,j;


printf("enter the lengthv of array 1 : ");
scanf("%d",&n1);


int num[n1];
	for(i=0;i<n1;i++){
		printf("enter the value of %d position : ",i);
		scanf("%d",&num[i]);
	}
	
	for(i=0;i<n1;i++){
		printf("the value of %d position is : %d\n",i,num[i]);
	}

	printf("enter the length of array 2 : ");
	scanf("%d",&n2);
	
	int num1[n2];
	
	for(j=0;j<n2;j++){
		printf("enter the value of %d position : ",j);
		scanf("%d",&num1[j]);
	}
	
	for(j=0;j<n2;j++){
		printf("the value of %d position is : %d\n",j,num1[j]);

	}
	
return 0;
}