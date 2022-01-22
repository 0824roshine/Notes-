#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<malloc.h>
// 栈区 局部变量 形参
// 堆区 动态内存分配   malloc free calloc realloc
// 静态区 全局 静态变量，static  int a=10
void malloc使用细节()  //效率比ralloc高
{
	int*p = (int*)malloc(10 * sizeof(int));
//返回值是地址，类型是void*。
// 需要强制类型转换成int*。头文件stdlib.h。
// 
// 没内存时返回空指针。成功时才能解引用
	if (p == NULL)      //______________________******          
		printf("%s\n", strerror(errno));
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = i;
		printf("%d ", *(p + i));
	}
	free(p);// 返还给操作系统
	p = NULL;//主动赋值成空指针，避免犯错误
}
void calloc_使用()//效率偏低但是需要初始化
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
void realloc调整内存分配()
{
// realloc 的两种追加空间的方式
	//1.后方空间够用，直接开辟  2.不够，找一片新的空间，并拷贝原数据，随后地址会变化
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
// p不能为NULL,不能越界访问，free只能释放动态内存
int main()
{
	malloc使用细节(); calloc使用();
	return 0;
}
