#include <stdio.h>
int main()
{int a,b,c,d,min,max,sum;
scanf("%d %d %d %d",&a,&b,&c,&d);
if(a>b)min=b;
else min=a;
if(c>d)max=c; 
else max=d;
sum=min+max;
printf("%d",sum);}


