#include<stdio.h>
int main()
{
int ar[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("enter the element of row %d and column %d :" , i,j);
        scanf("%d",&ar[i][j]);
    }
}

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(ar[i][j]==0){
            printf("\t");
        }else{
            printf("%d\t",ar[i][j]);

        }
        
    }   
    printf("\n");
}

return 0;
}