
#include<stdio.h>
int main(void)
{
	int a,b,c,d,t1,t2,t,n1,n2;
	scanf("%d%d",&a,&b);
	scanf("%d%d",&c,&d);
	t1=a*60+b;
	t2=c*60+d;
	if(t1>t2)
	{
		t=t1-t2;
		n1=t/60;
		n2=t%60;
		printf("%d:%d",n1,n2);
	}
	else
	{
		t=t2-t1;
		n1=t/60;
		n2=t%60;
		printf("%d:%d",n1,n2);
	}
  return 0;
}
