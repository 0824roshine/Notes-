#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
void getMemory(char *p)
{
	p = (char *)malloc(100);
}
void test1()
{
	char* str = NULL;
	getMemory(str);
	strcpy(str, "GieGie");
	printf(str);
}
// ����1
void getMemory2(char** p)
{
	*p = (char*)malloc(100);
}
void test2()
{
	char* str = NULL;
	getMemory2(&str);
	strcpy(str, "GieGie");
	printf(str);
	free(str);
	str = NULL;
}
//����3
char* getMemory3(char* p)
{
	p = (char*)malloc(100);
	return p;
}
void test3()
{
	char* str = NULL;
	str = getMemory3(str);
	strcpy(str, "GieGie");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{
	test2();// �ö���ָ��ͺ��ˡ�
	test3();
	test1();//������û����������ָ�룬�����ڴ�ʧ�� �һ�����ڴ�й¶
	return 0;
}
