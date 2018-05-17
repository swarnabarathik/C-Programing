#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	scanf("%s",a);
	int n,i,temp;
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]>='a'||a[i]<='z'||a[i]>='A'||a[i]<='Z'||a[i]>='0'||a[i]<='9')
		temp=1;
		else
		temp=0;
	}
	if(temp==1)
	printf("Yes");
	else
	printf("No");
  return 0;
}
