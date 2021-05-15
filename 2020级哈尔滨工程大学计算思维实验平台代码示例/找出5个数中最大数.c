#include<stdio.h>
 
int main()
{
	int a[5];
	int max,sum,i,k;
	sum=0;
	max=0;
	for (i=0;i<5;i++) 
	{
		scanf("%d", &a[sum]); //读入下一个数 
		if (a[sum] > max)
		{
			max=a[sum];    //更新max，让下一个数可以比较
			k=sum+1;
			sum++;
		} 
		else sum++;
	}
	printf("%d",k);
	return 0;
	}


