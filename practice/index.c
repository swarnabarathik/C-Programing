#include<stdio.h>
int main()
{
	int a[10],j,i,n;
	scanf("%d",&n);
	printf("\nEnter array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Array is:");
	for(j=0;j<n;j++)
	{
		printf("%d %d",a[i],j);
	}
}
