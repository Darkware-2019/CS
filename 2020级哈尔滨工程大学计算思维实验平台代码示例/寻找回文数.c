#include<stdio.h>
int main() 
{
	int a;
	scanf("%d",&a);
	huiwenshu(a);
	return 0;
	
}
int huiwenshu(int a);
int huiwenshu(int a)
{
	int i,x,y,z;
	z=1;
	printf("0,");
	for(i=1;i<=a;i++)
	{
		x=i;
		y=0;
		while(x>0)
		{
			y=y*10+x%10;
			x=x/10;
		}
		if(y==i)
		{
			printf("%d,",y);
			z++;
			if(z==10)
			{
				z=0;
				printf("\n");
			}
		}
	}
}


