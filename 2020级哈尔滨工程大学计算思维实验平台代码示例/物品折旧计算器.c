#include <stdio.h>
int main()
{float a,b,c,d;// a��ÿ���۾ɷ�  b�ǹ���۸�  c�Ƿ�Ʒ��ֵ  d���۾ɼ�ֵ 
int e,f;//e���������,f��ʹ������ 
scanf("%f,%f,%d,%d",&b,&c,&e,&f);
a=(b-c)/e;
d=b-a*f;
printf("%.2f,%.2f",a,d);
return 0;
}


