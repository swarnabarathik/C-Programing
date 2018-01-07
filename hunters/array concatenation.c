#include<stdio.h>
int main(void)
{
	int n,n1,a[10],b[10],i;
	scanf("%d\n",&n);
	scanf("%d\n",&n1);
	for

(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n1;i++)
	{
		

scanf("%d",&b[i]);
	}
	for(i=0;i<n1;i++)
	{
		a[n+i]=b[i];
	}
	for

(i=0;i<n+n1;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
