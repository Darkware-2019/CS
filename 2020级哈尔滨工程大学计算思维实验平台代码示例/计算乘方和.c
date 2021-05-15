#include <stdio.h>
int main ()
{
	int a;
	long b;
	scanf("%d",&a);
	if(a>2&&a<11)
	{
		b=a*a*a*a+(a+3)*(a+3)*(a+3)*(a+3)+(a+6)*(a+6)*(a+6)*(a+6)+(a+9)*(a+9)*(a+9)*(a+9)+(a+12)*(a+12)*(a+12)*(a+12)+(a+15)*(a+15)*(a+15)*(a+15);
		printf("%d",b);
	}
	else printf("error");
}

