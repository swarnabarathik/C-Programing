#include<stdio.h>
int main()
{      int n,temp;
	scanf("%d",&n);
	temp=n;
	n=n%10;
	if(n=='0'||n=='2'||n=='6'||n=='8'||n=='4')
	{
		printf("%d",temp);
	}
	else
	{
		printf("%d",temp-1);
	}
 return 0;
}
