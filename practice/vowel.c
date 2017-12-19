#include <stdio.h>
int main(void) 
{
	char con;
	scanf("%c",&con);
	if((con=='a'||con=='A')||(con=='e'|| con=='E')||(con=='i'|| con=='I')||(con=='o'|| con=='O')||(con=='u'|| con=='U'))
	{
		printf("Vowel");
	}
	else
	printf("Consonant");
	return 0;
}
