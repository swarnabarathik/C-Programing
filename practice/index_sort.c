#include<stdio.h>
int main(void)
{
	int n,i,j=0,count=0,k,m,temp;
	scanf("%d",&n);
	int a[n],b[10];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]==i)
		{
			count++;
			b[j]=a[i];
			j++;
		}
	}
if(count>0)
{
	for(k=0;k<count-1;k++)
	{
		for(m=k+1;m<count;m++)
		{
			if(b[k]>b[m])
				{
					temp=b[k];
					b[k]=b[m];
					b[m]=temp;
				}
		}
	}
	for(i=0;i<count;i++)
	printf("%d ",b[i]);
}
else
printf("-1");
return 0;
}
