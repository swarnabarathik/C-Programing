#include <stdio.h>
int main(void) 
{
	int n,a[100],i,j,k=0,m,temp,count=0,b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				printf("%d",a[i]);
				break;
			}
		}
		if(count>0)
		break;
	}
	if(count==0)
	{
	printf("UNIQUE");
	}
	return 0;
}