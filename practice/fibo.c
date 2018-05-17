include<stdio.h>
int main(void)
{
	int n,first=0,second=1,next,j;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		if(j<=1)
		next=j;
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
		printf("%d",next);
	}
  return 0;
} 
