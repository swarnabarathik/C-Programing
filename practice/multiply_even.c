#include <stdio.h>
int main(void) 
{
	int n,m,ans;
	scanf("%d %d",&n,&m);
	ans=n*m;
	if(ans%2==0)
	printf("Even");
	else
	printf("Odd");
}
