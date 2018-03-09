#include<stdio.h>
int main(void)
{
	int a[1000],i,max=0;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	for(j=0;j<10;j++)
	{
		if(a[j]>max)
		{
			max=a[j];
		}
	}
	printf("%d",max);
	return 0;
}
