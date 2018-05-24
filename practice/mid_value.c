#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[10],i,j,n;
	scanf("%s",a);
	n=strlen(a);
	j=(n/2);
	a[j]='*';
	printf("%s",a);
	return 0;
	
}
