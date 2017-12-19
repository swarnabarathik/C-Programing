#include <stdio.h>
int main( int argc, char *argv[] )
{
	 if(argc==2)
	printf("Two arguments %s %s",argv[0],argv[1]);
	else if(argc>2)
	printf("too many arguments");
	else
	printf("one argument %s",argv[0]);
	return 0;
}
