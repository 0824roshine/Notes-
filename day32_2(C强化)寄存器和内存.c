#define _CRT_SECURE_NO_WARNINGS
#pragma warning(2:4235)
#include<stdlib.h>
#include<windows.h>
#include<stdio.h>
#define M 10
// 不能加；加了就是一起替换
// 意义明确，可以批量修改
int main()
{
	//寄存器能赋值，a+1时通过寄存器完成的
	//变量储存在内存中，赋值是通过寄存器完成
	//c语言操作寄存器，不能直接操作内存。汇编语言都可。
	int a;

	printf("%p", &a);
	a = 012; //代码区的符号表
	/*__asm
	{
		mov  RAX, 10
		mov  a, RAX
	}*/
	//寄存器不能储存内存地址，不能简介修改
	printf("%d", a);
	return 0;
}