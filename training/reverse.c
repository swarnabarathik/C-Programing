#include<stdio.h>
#include<string.h>
int main(void)
{
char a[10];
int i,j,k,b,c,temp;
scanf("%s",a);
b=strlen(a);
for(i=0;i<b;i++)
{
if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u'))
{
for(j=i;j<b;j++)
{
a[j]=a[j+1];
}
}
}
for(i=(strlen(a)-1);i>=0;i--)
{
printf("%c",a[i]);
}
return 0;
}
