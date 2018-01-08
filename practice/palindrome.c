#include<stdio.h>
int main(void)
{
	int n,temp,rev=0,rem;
	scanf("%d",&n);
	temp=n;
	while(n)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(temp==rev)
	printf("YES");
	else
	printf("NO");
	return 0;
}
