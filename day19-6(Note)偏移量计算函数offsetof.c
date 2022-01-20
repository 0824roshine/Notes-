#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
struct S
{
	char c;
	int i;
	double d;
};
void offsetof_的使用()   // 它是一个宏函数。
{
	printf("%d  ", offsetof(struct S, c));
	printf("%d  ", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, d));
}
int main()
{
	offsetof_的使用();
}