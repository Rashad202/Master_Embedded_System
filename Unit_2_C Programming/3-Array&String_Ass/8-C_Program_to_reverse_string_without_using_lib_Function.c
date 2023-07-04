
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
