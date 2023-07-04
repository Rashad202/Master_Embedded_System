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
