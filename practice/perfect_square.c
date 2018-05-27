#include<stdio.h>
#include<math.h>
int main(void)
{
	int n,m,i,k;
	float j;
	scanf("%d %d",&n,&m);
	i=n*m;
	j=sqrt((double)i);
	k=j;
	if(j==k)
	printf("yes");
	else
	printf("No");
	return 0;
}
