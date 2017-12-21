#include<stdio.h>
int main(void)
{
	char roman[10];
	int a[10],i,k,b;
	scanf("%s",roman);
	b=strlen(roman);
	for(i=0;i<b;i++)
	{
		switch(roman[i])
		{
			case 'i':
			a[i]=1;
			break;
			case 'v':
			a[i]=5;
			break;
			case 'x':
			a[i]=10;
			break;
			default:
			printf("Invalid");
			break;
		}
	}
	k=a[b-1];
	for(i=b-1;i>0;i--)
	{
		if(a[i]>a[i-1])
		{
			k=k-a[i-1];
		}
		else
		{
			k=k+a[i-1];
		}
	}
	printf("%d",k);
	return 0;
}
		
