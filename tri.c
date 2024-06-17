#include<stdio.h>
int main()
{
int m,n,u,l,d;
u=0;
l=0;
d=0;

printf("enter the rows :");
scanf("%d",&m);

printf("enter the columns :");
scanf("%d",&n);

int array[m][n];

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        printf("enter the elements of %d rows and %d columns : " ,i,j);
        scanf("%d",&array[i][j]);
    }
}

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        if(i<j){
            u=u+array[i][j];
        
        }else if(i>j){
         l=l+array[i][j];

        }else{
           d=d+array[i][j];  
        }
    }
    printf("\n");
}

printf("the sum of the uper triangle is  : %d \n", u);
printf("the sum of the lower triangle is                                                                                                                                                                                                                                          : %d \n",l );
printf("the sum of the diagonal is  : %d \n ", d);


return 0;
}