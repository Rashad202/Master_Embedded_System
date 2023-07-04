#include <stdio.h>
#include <string.h>

void reverseSentence();

int main()
{
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reverseSentence()
{
    char s;
    scanf("%c", &s);

    if (s != '\n')
    {
        reverseSentence();
        printf("%c", s);
    }
}