#include<stdio.h>
#include<string.h>
void main()
{
    char sentence[100];
    int i;
    int countSpace=0,countChar=0;
    printf("Enter a sentence: ");
    gets(sentence);
    int length = strlen(sentence);
    for(i=0;i<length;i++)
    {
        if(sentence[i]==' ')
        {
            countSpace++;
        }
        else
        {
            countChar++;
        }
    }
    printf("The sentence contains %i character(s) and %i space(s).",countChar,countSpace);
    return 0;
}
