#include <stdio.h>
struct student
{
    char name[50];
    int roll ;
    float mark;
};
int main()
{
    struct student X;
    printf("Enter Name: ");
    scanf("%s",&X.name);
     printf("Enter roll number: ");
    scanf("%d",&X.roll);
     printf("Enter marks: ");
    scanf("%f",&X.mark);
    
    printf("name: %s \n",X.name);
    printf("Roll : %d\n",X.roll);
    printf("Marks : %0.2f\n",X.mark);
    return 0;
}
