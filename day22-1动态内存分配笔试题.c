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
// 改正1
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
//改正3
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
	test2();// 用二级指针就好了。
	test3();
	test1();//崩溃，没法拷贝到空指针，访问内存失败 且会造成内存泄露
	return 0;
}
