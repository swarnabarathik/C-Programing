#include <stdio.h>
int main(void) 
{
	int n,temp,a,b,c,d;
	scanf("%d",&n);
	temp=n;
	if(temp!=0)
	{
		a=temp/100;
		b=temp%100;
		c=b/10;
		d=b%10;
	}
	printf("%d %d %d",a,c,d);
  return 0;
}
