#include <stdio.h> 
struct student 
{   char name[30];
    int rollno ;
    int marks[3];
    int total;
   float per;
};
int main(){
struct student student[3];
for(int i=0;i<3;i++){
    student[i].total=0;
    student[i].per=0.0;
    printf("enter student %d  name : " , i );
    scanf("%s",&student[i].name);
    printf("enter student %d roll number : " , i );
    scanf("%d",&student[i].rollno);
        for(int j=0;j<3;j++){
            printf("enter subject %d marks : ",j);
            scanf("%d",&student[i].marks[j]);
            student[i].total+=student[i].marks[j];
           student[i].per=student[i].total/3;
        }
 printf("total marks are : %d\n ",student[i].total );
  printf("total percentage are : %.2f \n ",student[i].per );
}
return 0;
}