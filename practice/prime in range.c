#include<stdio.h>
int main(void)
{
int n,n1,i,j,count;
scanf("%d",&n);
scanf("%d",&n1);
i=n;
while(i<n1)
{
count=0;
for(j=2;j<=i/2;j++)
{
if(i%j==0)
count ++;
}
if(count==0 && i!=1)
printf(" %d",i);
i++;
}
return 0;
}
