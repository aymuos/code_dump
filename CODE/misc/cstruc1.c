#include<stdio.h>
struct StudentData{
    char *stu_name;
    int stu_id;
    int stu_age;
};
int main(){
    /* data */
   struct StudentData student;

   student.stu_name="Steve";
   student.stu_id=15;
   student.stu_age=45;

   printf("Student name is %s \n",student.stu_name);
   printf("Student age is %d \t ",student.stu_age);
   printf("Student Id is %d \t", student.stu_id);
   return 0;


};
