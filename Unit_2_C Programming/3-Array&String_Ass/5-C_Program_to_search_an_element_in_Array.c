
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