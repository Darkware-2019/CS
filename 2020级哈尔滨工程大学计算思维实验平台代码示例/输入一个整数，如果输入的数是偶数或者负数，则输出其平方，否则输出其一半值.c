#include <stdio.h>
int main ()
{
	int a,b;
	float c;
	scanf("%d",&a);
	b=a*a;
	c=a/2.0;
	if(a%2==0||a<0)
	printf("%d",b);
	else 
	printf("%f",c);
	return 0;
}

