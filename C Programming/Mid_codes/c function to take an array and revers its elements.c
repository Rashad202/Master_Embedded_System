#include <stdio.h>

void unique (int x[],int y)
{
    for(int i=y-1;i>=0;--i)
    {
       printf("%d ",x[i]);
     
    }
}
int main() {
    int num;
    
    printf("Enter a size of array : ");
    scanf("%d", &num);
    int a[num];
    for(int i=0;i<num;i++)
    {
       printf("Enter element %d: ",i+1);
       scanf("%d",& a[i]);
    }
    unique(a,num);
}