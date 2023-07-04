#include <stdio.h>

int unique (int x[],int y)
{
    int NUM = x[0];
	
	for(int i=1 ; i<y ; i++)
	{
		NUM ^= x[i];
	}
	
return NUM;
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
    printf("The unique element is %d",unique(a,num));
    return 0;
}