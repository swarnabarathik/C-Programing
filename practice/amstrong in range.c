#include<stdio.h>
int main(void)
{
int n,n1,temp,rem,sum,i;
scanf("%d",&n);
scanf("%d",&n1);
for( i=n+1;i<n1;i++)
{
temp=i;
sum=0;
while(temp!=0)
{
rem=temp%10;
sum+=rem*rem*rem;
temp/=10;
}
if(i==sum)
{
printf(" %d",i);
}
}
return 0;
}

