#include <stdio.h>
int main()
{float a,b,c,d;// a是每年折旧费  b是购买价格  c是废品价值  d是折旧价值 
int e,f;//e是设计寿命,f是使用年限 
scanf("%f,%f,%d,%d",&b,&c,&e,&f);
a=(b-c)/e;
d=b-a*f;
printf("%.2f,%.2f",a,d);
return 0;
}


