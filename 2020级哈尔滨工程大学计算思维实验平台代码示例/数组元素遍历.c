#include <stdio.h>

int main()
{
	int a[10],i,sum,k;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++)
	{
		sum+=a[i];
	}
	k=sum/9;
	a[9]=k;
	for(i=0;i<10;i++)
	{
		if(i==9)
		printf("%d",a[i]);
		else
		printf("%d,",a[i]);
	}
}

