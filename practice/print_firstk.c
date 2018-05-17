#include<stdio.h>
#include<string.h>
int main(void) 
{
	char a[100];
	int n,i,m;
	scanf("%s",a);
	scanf("%d",&n);
	m=strlen(a);
	for(i=0;i<n;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
