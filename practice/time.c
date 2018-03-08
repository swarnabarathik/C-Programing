#include <stdio.h>
int main(void)
{
	int a,b=0,h,m;
	scanf("%d",&a);
	if(a<=0)
	{
		printf("%d",b);
	}
	else
	{
		h=a/60;
		m=a%60;
		printf("%d",h);
		printf(" %d",m);
	}
	return 0;
}
