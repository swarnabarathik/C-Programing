#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[1000];
	int n,i,count=0;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]==' ')
		count++;
	}
	if(count>0)
	printf("%d",count);
  return 0;
}
