#include<stdio.h>
int main(void)
{
	int num,i,count=0;
	scanf("%d",&num);
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
		count++;
		break;
		}
	}
	if(count==0 && num!=1)
	printf("Yes");
	else
	printf("No");
	return 0;
}
