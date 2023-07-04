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
#include <stdio.h>

int main()
{
  int n,m;
  
  printf("Enter rows and colums of matrix: ");
  scanf("%d\n%d",&n,&m);
  printf("Enter elements of matrix: \n");
    int mat[n][m];
      for(int i=0;i<n;i++)
              {
                  for(int j=0;j<m;j++)
                    {
                        printf("Enter element a%d%d : ",i,j);
                        scanf("%d",&mat[i][j]);
                    }
              }
    printf("Entered matrix :\n");      
       for(int i=0;i<n;i++)
              {
                  for(int j=0;j<m;j++)
                    {
                        printf("%d\t",mat[i][j]);
                       
                    }
                    printf("\n");
              }          
    int temp[m][n];
    printf("Transposed matrix :\n");
    for(int i=0;i<m;i++)
              {
                  for(int j=0;j<n;j++)
                    {
                        temp[i][j]=mat[j][i];
                        printf("%d\t",temp[i][j]);
                       
                    }
                    printf("\n");
              }
    
}
