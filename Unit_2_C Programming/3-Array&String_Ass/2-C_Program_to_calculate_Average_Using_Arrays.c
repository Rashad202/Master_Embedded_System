#include <stdio.h>

int main()
{
  int n;
  
  printf("Enter the numbers of data : ");
  scanf("%d",&n);
  float a[n];
        for(int i=0;i<n;i++)
          {
            printf("Enter number: ");
            scanf("%f",&a[i]);
          }
  float Average=0;
        for(int i=0;i<n;i++)
          {
            
            Average+=a[i];
          }
    Average=Average/n;      
    printf("Average = %0.2f",Average);
}
