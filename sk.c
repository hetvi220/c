#include<stdio.h>
#include<string.h>
int main()
{


char st1[20]= "skill";
char st2[20]="qode";
char st3[20];
int k=0;

for(int i=0;st1[i]!='\0';i++,k++){
    st3[k]=st1[i];
}
for(int j=0;st2[j]!='\0';j++,k++){
    st3[k]=st2[j];
}
st3[k]='\0';
printf("%s",st3);
return 0;
}