#include<stdio.h>
//枚举的可能取值是常量。
/*
 1.增加了可读性和维护性。
 2. 防止define定义的标识符比较枚举有类型检查，更加严谨
 3.防止了命名污染
 4.和define相比，更便于调试
 5.使用方便，可以一次定义多个常量。
 */
enum Sex
{
	male = 1,
	famale = 2,
	secret = 0
};
enum Color
{
	RED,
	GREEN,
	BLUE
};
void enum_how_to_use()
{
	printf("%d %d %d\n", male, famale, secret);
	printf("%d %d %d\n", RED, GREEN, BLUE);
}
//联合体==共用体  
//成员共用同一块内存空间，变量的大小是最大成员的
//不同成员不能同时用
union UN
{
	char c;
	int i;
};
void union的地址()
{
	union UN u;
	printf("%d %p %p %p\n", sizeof(u), &u, &(u.c), &(u.i));
}
//联合体的大小至少是最大成员的大小。
//当  最大成员的大小  不是   最大对齐数  的整数倍时，就要对齐
void union的大小()
{
	union UUUN
	{
		int a;         // 最大对齐数4 成员大小4    8
		char arr[5];   //     对齐数1 最大成员5
	}uuu;
	printf("%d\n", sizeof(uuu));
}

int main()
{
	enum_how_to_use();
	union的地址();
	union的大小();
	//错误代码	enum Color c = 2; 虽然c不报错，但是c++会。
	return 0;
}