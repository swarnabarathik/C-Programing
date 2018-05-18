#include<stdio.h>
int main(void)
{
	int n,i,j,count=0;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(j!=i)
			{
			if(a[j]==a[i])
			count++;
			}
		}
		if(count==0)
		printf("%d",a[i]);
	}
	return 0;
}
