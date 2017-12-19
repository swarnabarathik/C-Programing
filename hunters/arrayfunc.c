#include<stdio.h>
int main(void)
{
	int a[10],n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int ele=max(a, n);
	printf("%d",ele);
	return 0;
}
int max(int b[],int x)
{
	int c=b[0];
	for(int i=1;i<x;i++)
	{
		if(c<b[i])
		{
			c=b[i];
		}
	}
	return c;
}
