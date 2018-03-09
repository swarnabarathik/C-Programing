#include<stdio.h>
#include<string.h>
int main(void)
{
char a[100],b[100];
int i,l,k,n;
printf("enter two strings");
scanf("%s",&a);
scanf("%s",&b);
l=strlen(a); 
k=strlen(b);
n=l+k;
for(i=0;i<n;i++)
{
   a[l]=b[i];
   l++;
}
printf("%s",a);
return 0;
}
