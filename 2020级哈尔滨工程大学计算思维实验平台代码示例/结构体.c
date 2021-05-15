#include<stdio.h>


int main()
{
		struct stu
	{
		int num;
		char name;
		int age;
		int math;
		int Eng;
		int c;
		int eng;
		int phy;
		int inf;
		int sum;
	} stu1;
	stu1.math=4;
	stu1.Eng=3;
	stu1.c=4;
	stu1.eng=3;
	stu1.phy=3;
	stu1.inf=3;
	scanf("%d",&stu1.num);
	scanf("%c",&stu1.name);
	scanf("%d",&stu1.age);
	stu1.sum=stu1.math+stu1.Eng+stu1.c+stu1.eng+stu1.phy+stu1.inf;
	printf("%d",stu1.sum);
}
