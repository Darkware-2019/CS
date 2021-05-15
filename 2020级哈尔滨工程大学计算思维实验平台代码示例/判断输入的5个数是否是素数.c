#include <stdio.h>
#include <math.h>
int prime(int m)
{
int i,n;
if(m==1)return 0;
n=(int)sqrt((double)m);
for(i=2;i<=n;i++)
if(m%i==0)return 0;
return 1;
}
int main()
{
int i,n;
for(i=0;i<5;i++)
{int c;
scanf("%d",&n);
if(prime(n))
printf("%d ",n);
else c+=n;
}
} 


