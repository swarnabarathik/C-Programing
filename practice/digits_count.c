#include<stdio.h>
int main(void)
{
	int n,count=0,reverse;
	scanf("%ld",&n);
	while(n!=0)
	{
		reverse=n%10;
		count=count+1;
		n=n/10;
	}
	printf("%ld",count);
  return 0;
}
