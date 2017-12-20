#include<stdio.h>
int main(void)
{
	char a[10],j;
	int i,b;
	scanf("%s",a);
	b=strlen(a);
	if(b%2==0)
	{
	          for(i=0;i<b;i+=2)
	          {
		          j=a[i];
		          a[i]=a[i+1];
		          a[i+1]=j;
	          }
	}
	else
	{
            for(i=0;i<b-1;i+=2)
            {
            	j=a[i];
            	a[i]=a[i+1];
            	a[i+1]=j;
            }
	}
	for(i=0;i<b;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
 
}
