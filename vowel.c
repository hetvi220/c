#include<stdio.h>
int main ()
{  
char A,lower,upper;
printf("enter any alphabet : ");
scanf("%c",&A);
lower=(A=='a'|| A=='e'|| A=='i'|| A=='o'|| A=='u');
upper=(A=='A'|| A=='E'|| A=='I'|| A=='O'|| A=='U');
if(lower || upper){
	printf(" %c is a vowel",A);
}else{
	printf("%c is a consonant",A);
}
 
return 0;
}