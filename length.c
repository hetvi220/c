#include<stdio.h>
#include<string.h>
int main()
{
char name[20];
int i,k=0;

gets(name);
for(int i=0;name[i]!='\0';i++){
    k++;    
}
printf("the total length of the word is : %d \n ", k);

// reverse

for(i=0;name[i]!='\0';i++){
    printf("%c",name[k-1]);
    k--;
}

return 0;
}