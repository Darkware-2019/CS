#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d,%d",&a,&b);
	shuangzhishu(a,b);
	return 0;
}
int shuangzhishu(int a,int b);
int shuangzhishu(int a,int b)
{
	int x,i,y,z,q;
	z=0;
	q=0;
	for(x=a;x<=(b-2);x++)
	{
		for(i=2;i<x;i++)
		{
			y=x%i;
			if(y==0)
			{
				z=1;
				break;
			}
		}
			if(z!=1)
			{
				for(i=2;i<(x+2);i++)
				{
					y=(x+2)%i;
					if(y==0)
					{
						q=1;
						break;
					}
				}
				if(q!=1)
				{
					printf("%d,%d\n",x,x+2);
				}
				q=0;
			}
	z=0;		
	}
}









