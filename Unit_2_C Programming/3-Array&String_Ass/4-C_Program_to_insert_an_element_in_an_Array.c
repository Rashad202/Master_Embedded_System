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