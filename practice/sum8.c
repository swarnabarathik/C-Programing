#include<stdio.h>
int main(void)
{
	int a,i=1,sum=0;
	scanf("%d",&a);
	while(i<=a)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
	return 0;
	
}
