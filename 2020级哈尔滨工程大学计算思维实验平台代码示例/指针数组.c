#include <stdio.h>

 

/*

@Filename: ex602.c

@Author: 

@Version: 1.0

@Date: 2021-03-18

@Description: Pointer As Function Parameter

*/

 

int main(void){

void assign(int *array, int length);

int max(int *array, int length);

int a[5]; 

assign(a, 5); /* Ϊ����aԪ�ظ�ֵ */

printf("max=%d",max(a, 5)); /* ������Ԫ�����ֵ����� */

return 0;

}

 

/*

 * �������ƣ�assign

 * �������ܣ�ͨ����������Ϊһά����Ԫ�ظ�ֵ

 * ��ʽ������arrayΪint��ָ�룻lengthΪint�ͣ������ڱ�ʾһά���鳤��

 * �� �� ֵ����

 */

void assign(int *array,int length){
	int a[5]; 
	for (length=0;length<5;length++)
	{
		scanf("%d",&a[length]);
	}
	

// �����ʵ��assign����



}

 

/*

 * �������ƣ�max

 * �������ܣ����һά����Ԫ�����ֵ

 * ��ʽ������arrayΪint��ָ�룻lengthΪint�ͣ������ڱ�ʾһά���鳤��

 * �� �� ֵ��int�ͣ�Ϊ����Ԫ�����ֵ

 */

int max(int *array,int length)
{	int a[5]; 
	array=&a[0];
	for (length=0;length<5;length++)
	{
		if(a[length]>*array)
		array=&a[length];
		else ;
	}
// �����ʵ��max����
}
