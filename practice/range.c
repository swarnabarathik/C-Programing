#include<stdio.h>
int main(void)
{
	int n,l,m,i;
	scanf("%d %d %d",&n,&l,&m);
	for(i=l;i<=m;i++)
	{
		if(i==n)
		{
		printf("Yes");
		break;
		}
	}
	if(i==m+1)
	printf("No");
	return 0;
}
