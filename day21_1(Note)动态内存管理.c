#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<malloc.h>
// ջ�� �ֲ����� �β�
// ���� ��̬�ڴ����   malloc free calloc realloc
// ��̬�� ȫ�� ��̬������static  int a=10
void mallocʹ��ϸ��()  //Ч�ʱ�ralloc��
{
	int*p = (int*)malloc(10 * sizeof(int));
//����ֵ�ǵ�ַ��������void*��
// ��Ҫǿ������ת����int*��ͷ�ļ�stdlib.h��
// 
// û�ڴ�ʱ���ؿ�ָ�롣�ɹ�ʱ���ܽ�����
	if (p == NULL)      //______________________******          
		printf("%s\n", strerror(errno));
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
		printf("%d ", *(p + i));
	}
	free(p);// ����������ϵͳ
	p = NULL;//������ֵ�ɿ�ָ�룬���ⷸ����
}
void calloc_ʹ��()//Ч��ƫ�͵�����Ҫ��ʼ��
{
	int*p = (int*)calloc(10 , sizeof(int));
	if (p == NULL)
		printf("%s\n", strerror(errno));
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;
}
void realloc�����ڴ����()
{
// realloc ������׷�ӿռ�ķ�ʽ
	//1.�󷽿ռ乻�ã�ֱ�ӿ���  2.��������һƬ�µĿռ䣬������ԭ���ݣ�����ַ��仯
	int* p = (int*)malloc(20);
	if (p == NULL)
		printf("%s\n", strerror(errno));
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		*(p + i) = i;
	}
	int* p2 = realloc(p,40);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p2 + i));
	}
}
// p����ΪNULL,����Խ����ʣ�freeֻ���ͷŶ�̬�ڴ�
int main()
{
	mallocʹ��ϸ��(); callocʹ��();
	return 0;
}
