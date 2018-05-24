#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[10],b[10],i,j,n;
	scanf("%s",a);
	n=strlen(a);
	j=n-1;
	for(i=0;i<n;i++)
	{
		b[j]=a[i];
		j--;
	}
	if(strcmp(a,b)==0)
	printf("Yes");
	else
	printf("No");
	return 0;
}
