#include <stdio.h>
int main()
{
	int i,j;
	float a,b,c,sum;
	scanf("%d",&j);
	a=2;
	b=1;
	for(i=0;i<j;i++)
	{	c=a/b;
		sum+=c;
		a=a+b;
		b=a-b;
	}
	printf("%.2f",sum);
}

