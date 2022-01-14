#define _CRT_SYSTEM_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
// debug 和release； debug 调试版本 release 发布版本，release 会优化一些
/*快捷键
  F5和F9 配合使用
* F9切换断点 F5直接逃到下一个逻辑断电处
* F11 逐语句     shift+F11跳过当前函数
}*/
/*窗口
 自动 寄存器
 调用堆栈  反馈出当前的函数调用逻辑
}*/
void My_strcpy(char* dest, char* src)
{
	if (dest != NULL && src != NULL)
	{
		while (*dest++ = *src++)
			;
	}
}
void My_strcpy1(char* dest, char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
		;
}
//断言  报错
void My_strcpy2(char* dest,const char* src)  //const能防止源和目的地写反，保护源
{
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
		;
}

char* My_strcpy3(char* dest, const char* src)  //有返回值就能更方便的链式调用。
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
		;
	return ret;
}
void 栈的地址空间()
{
	int i = 0;       //栈区优先使用高地址空间
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 1; i <=10; i++)
	{
		printf("%d  ", arr[i]);   // release会优化 i的地址，而debug不会
		arr[i] = 0;
	}
}
//代码运行正常，bug少，可读性好，可维护性高，注释清楚，文档齐全。
int mian()
{
	const int num =10;
	const int* p1 = &num;   //这里修饰的是 *p  ,不能通过p来修饰 num
	int* const p2 = &num; //这里的const限制的是指针变量。
}
/*语法错误：可以双击错误来到所在行。
链接型错误：运行错误
*/