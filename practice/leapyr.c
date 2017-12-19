#include<stdio.h>
int main(void)
{
	int year;
	scanf("%d",&year);
	if(year%4==0)
	printf("Leap year");
	else
	printf("Not a Leap year");
	return 0;
}
