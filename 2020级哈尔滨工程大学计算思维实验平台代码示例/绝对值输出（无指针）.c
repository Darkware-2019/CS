#include<stdio.h>
#include<math.h>

int main()
{
	int i,j;
	float a[10],temp;
	for(i=0;i<10;i++)
	scanf("%f",&a[i]);
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(fabs(a[i])<fabs(a[j]))
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
		}
	}
	for(i=0;i<10;i++)
	{
		if(i==9)
		{
			printf("%.2f",a[i]);
		}
	else printf("%.2f,",a[i]);
	}
	return 0;
}






















//��������darkware2019ԭ��   δ����ɲ��ø��� 
