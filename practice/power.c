#include<stdio.h>
int main(void)
{
	int a,b,i=1,j;
	scanf("%d",&a);
	scanf("%d",&b);
	int temp=a;
	while(i<b)
	{
		a=a*temp;
		i++;
	}
	printf("%d",a);
}
