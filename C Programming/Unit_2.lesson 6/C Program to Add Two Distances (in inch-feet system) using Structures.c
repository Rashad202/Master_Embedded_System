#include <stdio.h>
struct student
{
    
    int feet ;
    float inch;
};
int main()
{
    struct student X ,Y, sum;
    printf("Enter information for 1st distance:\n");
     printf("Enter feet: ");
    scanf("%d",&X.feet);
     printf("Enter inch: ");
    scanf("%f",&X.inch);
    printf("Enter information for 2nd distance:\n");
     printf("Enter feet: ");
    scanf("%d",&Y.feet);
     printf("Enter inch: ");
    scanf("%f",&Y.inch);
    
    sum.feet=X.feet+Y.feet;
    sum.inch=X.inch+Y.inch;
    
    while (sum.inch >= 12.0) {
      sum.inch = sum.inch - 12.0;
      ++sum.feet;
   }
   printf("\nSum of distances = %d\'-%.1f\"", sum.feet, sum.inch);
    return 0;
}
