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

