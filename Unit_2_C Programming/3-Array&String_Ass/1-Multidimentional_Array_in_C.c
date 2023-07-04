#include <stdio.h>

int main()
{
  float a[2][2];
  float b[2][2];
  float sum[2][2];
 
    printf("Enter the elements of 1st matrix :\n");
        for(int i=0;i<2;i++)
          {
              for(int j=0;j<2;j++)
                {
                    printf("Enter a%d%d : ",i,j);
                    scanf("%f",&a[i][j]);
                }
          }
    printf("Enter the elements of 2nd matrix :\n");
        for(int i=0;i<2;i++)
          {
              for(int j=0;j<2;j++)
                {
                    printf("Enter b%d%d : ",i,j);
                    scanf("%f",&b[i][j]);
                }
          }
  
 
    printf("Sum of matrix\n");
        for(int i=0;i<2;i++)
          {
              for(int j=0;j<2;j++)
                {
                    sum[i][j] =a[i][j]+b[i][j];
                    printf("%0.1f\t",sum[i][j]);
                   
                }
                printf("\n");
          }
}
