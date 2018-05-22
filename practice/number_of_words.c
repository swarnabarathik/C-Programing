#include <stdio.h>
int main(void)
{
    char str[100];
    int i, words;
    gets(str);
    i = 0;
    words = 1;  
    while(str[i] != '\0')
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            words++;
        }
        i++;
    }
    printf("%d", words);
    return 0;
}
