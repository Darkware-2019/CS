#include <stdio.h>

int main()
{
	int a[10],i,j,t;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(i==9)
		printf("%d\n",a[i]);
		else 
		printf("%d,",a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<9-i;j++)
		if(a[j]>a[j+1])
		{t=a[j];a[j]=a[j+1];a[j+1]=t;
		}
	}
	for(i=0;i<10;i++)
	{
		if(i==9)
		printf("%d",a[i]);
		else 
		printf("%d,",a[i]);
	}
}

