//----------------------------------Ex1----------------------------------


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

//----------------------------------Ex2----------------------------------
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

//----------------------------------Ex3----------------------------------

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

//----------------------------------Ex4----------------------------------

#include <stdio.h>

int main()
{
  int n ,m , z;
  
  printf("Enter no of elements : ");
  scanf("%d\n",&n);
  int a[n];
    
      for(int i=0;i<n;i++)
              {
                scanf("%d",&a[i]);
              }
              
    printf("Enter the element to be inserted : ");      
    scanf("%d",&m);
    printf("Enter the location : ");      
    scanf("%d",&z);
    for(int j =n ;j>=z;j--)
    {
        a[j]=a[j-1];
    }
    n+=1;
    a[z-1]= m;

    for(int x=0;x<n;x++)
    {
        printf("%d ",a[x]);
    }
}


//----------------------------------Ex5----------------------------------

#include <stdio.h>

int main()
{
  int n ,m ,x;
  
  printf("Enter no of elements : ");
  scanf("%d\n",&n);
  int a[n];
    
      for(int i=0;i<n;i++)
              {
                scanf("%d",&a[i]);
              }
              
    printf("Enter the element to be searched : ");      
    scanf("%d",&m);
    for(int i=0 ;i<n;i++)
    {
        if(a[i] == m)
        {
           x=i;
        }
    }
    printf("the number found at location = %d",x+1);
}
-
//----------------------------------String---------------------------------------


//----------------------------------Ex1----------------------------------
#include <stdio.h>
#include <string.h>
int main()
{
  char a[100];
  char b;
  printf("Enter the string : ");
  gets(a);
  
  printf("Enter a character to frequency : ");
  scanf("%c",&b);
  int x=0;
  for(int i=0;i<100;i++)
  {
      if(a[i] == b)
      {
         x+=1; 
      }
      
  }
  printf("frequency of %c = %d",b,x); 
}


//----------------------------------Ex2----------------------------------
#include <stdio.h>
#include <string.h>
int main()
{
  char a[40];

  printf("Enter the string : ");
  scanf("%s",a);
  int x= strlen(a);
  printf("Length of string : %d",x);
}



//----------------------------------Ex3----------------------------------

#include <stdio.h>
#include <string.h>
int main()
{
int size =20;
  char a[size];
  char b[size];
  printf("Enter the string : ");
  scanf("%s",a);
  
 int x=strlen(a);
 printf("Reversed string is: ");
  for(int i=0;i<x;i++)
  {
      b[i]=a[x-1-i];
     printf("%c",b[i]); 
  }
}