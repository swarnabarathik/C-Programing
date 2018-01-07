#include<stdio.h>
#include<string.h>
int main(void)
{
char *s;
int l,i;
gets(s);
l=strlen(s);
for(i=l;i>=0;i--)
{
printf("%c",*(s+i));
}
return 0;
}
