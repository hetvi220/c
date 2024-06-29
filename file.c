#include <stdio.h>
int main()
{
    FILE *hetvi;
    char string[50];

    hetvi = fopen("eg.txt ", "r");
while(fscanf(hetvi,"%s",string)!=EOF){
    printf("%s ",string);
}

    fclose(hetvi);
        return 0;
}