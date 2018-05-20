#include<stdio.h>
int main(void)
{
	int a[100],b[100],n,m,i,j,k=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(b[j]==a[i])
			k++;
		}
	}
	if(k==m)
	printf("YES");
	else
	printf("NO");
	return 0;
}
