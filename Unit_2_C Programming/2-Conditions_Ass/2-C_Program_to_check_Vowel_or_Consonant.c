#include <stdio.h>
int main()
{
   char x;
     printf("Enter an alphabet : ");
     scanf("%c",&x);
      
    if (x == 'a' || x== 'e'|| x== 'i'|| x== 'o'|| x== 'u'||x == 'A' || x== 'E'|| x== 'I'|| x== 'O'|| x== 'U')   
            printf("%c is a vowel ",x);
    else
            printf("%c is a consonat ",x);
  
    return 0;
}

//-----------or-----

#include <stdio.h>
int main()
{
   char x;
      printf("Enter an alphabet : ");
      scanf("%c",&x);

   switch(x)
   {
    	case 'a':
	case 'A':
        	printf("%c is a vowel ",x);
        	break;	
	case 'e':
	case 'E':
        	printf("%c is a vowel ",x);
	        break;
	case 'i':
	case 'I':
        	printf("%c is a vowel ",x);
	        break;	
	case 'o':
	case 'O':
        	printf("%c is a vowel ",x);
	        break;
	case 'u':
	case 'U':
	        printf("%c is a vowel ",x);
	        break;
	default:
	        printf("%c is a consonat ",x);
	        break;
   }
  
    return 0;
}