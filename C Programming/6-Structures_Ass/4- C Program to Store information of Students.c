#include <stdio.h>
struct student
{
    char name[50];
    int roll ;
    float mark;
};
int main()
{
    struct student X[10];
     printf("Enter information of students \n");
    for(int i=1;i<=10;i++)
    {
    printf("Enter roll number %d\n ",i);
    printf("Enter Name: ");
    scanf("%s",&X[i].name);
     printf("Enter marks: ");
    scanf("%f",&X[i].mark);
    }
    printf("Displaying information of students \n");
     for(int i=1;i<=10;i++)
    {
         printf("information of roll %d\n",i);
    printf("name: %s \n",X[i].name);
   
    printf("Marks : %0.2f\n",X[i].mark);
    }
    return 0;
}