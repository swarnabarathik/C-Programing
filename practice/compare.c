#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100],b[100];
	scanf("%s",a);
	scanf("%s",b);
	if(strlen(a)==strlen(b))
	printf("%s",b);
	else if(strlen(a)>strlen(b))
	printf("%s",a);
	else
	printf("%s",b);
  return 0;
}
