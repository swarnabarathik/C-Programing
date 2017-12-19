#include<stdio.h>
int main(void)
{
	int a,count=0;
	scanf("%d",&a);
	while(a)
	{
		a=a/10;
		count++;
	}
	printf("%d",count);
	return 0;
}
