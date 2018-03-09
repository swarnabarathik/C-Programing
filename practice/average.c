#include<stdio.h>
int main(void)
{
	int p,a[1000],i,j,sum=0,avg;
	scanf("%d",&p);
	for(i=0;i<p;i++)
	scanf("%d",&a[i]);
	for(i=0;i<p;i++)
	{
		sum=sum+a[i];	
	}
	avg=sum/p;
	printf("%d",avg);
	return 0;
}
