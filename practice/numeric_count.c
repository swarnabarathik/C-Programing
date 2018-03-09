#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int n,i,count=0;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='8'||a[i]=='9')
		count=count+1;
	}
	printf("%d",count);
  return 0;
}
