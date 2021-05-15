#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	nianling(x);
	x=nianling(x);
	printf("%d",x);
	return 0;
	
}
int y;
y=8;
int nianling(int a);
int nianling(int a)
{
	y=y+1;
	if(a!=1)
	{
		return nianling(a-1);
	}
	else
	{
		return y;
	}
}


