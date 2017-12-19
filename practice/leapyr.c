#include<stdio.h>
int main(void)
{
	int year;
	scanf("%d",&year);
	if((year%400==0)||((year%100!=0)&&(year%4==0)))
	printf("Leap year");
	else
	printf("not a leap year");
	return 0;
}
