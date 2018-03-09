#include <stdio.h>
int main(void)
{
	char a[50]="Hello world.Goodbye";
	int i,c=0,line;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]=='.')
		c=++c;
		else
		c=c;
	}
	line=c+1;
	printf("No.of lines %d",line);
	return 0;
}
