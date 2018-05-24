#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[10];
	int n,j;
	scanf("%s",a);
	n=strlen(a);
	for(j=0;j<n;j++)
	{
		if(a[j]=='a'||a[j]=='e'||a[j]=='o'||a[j]=='u'||a[j]=='i'||a[j]=='A'||a[j]=='E'||a[j]=='O'||a[j]=='U')
		{
			printf("Yes");
			break;
		}
	}
	if(j==n)
	printf("No");
	return 0;
}
