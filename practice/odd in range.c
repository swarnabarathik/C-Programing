#include<stdio.h>
int main(void)
{
int n,n1,i;
scanf("%d",&n);
scanf("%d",&n1);
for(i=n+1;i<=n1;i++)
{
if(i%2!=0)
printf(" %d",i);
}
return 0;
}
