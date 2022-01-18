#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct S
{
	int a; int b;
};
struct Stu
{
	int num;
	char name[10];
	int age;
};
void 结构体打印_题1()
{
	struct S a, * p = &a;
	a.a = 99;
	printf("%d\n", a.a);    //这里有3种方法能打印
	printf("%d\n", (*p).a);
	printf("%d\n", p->a);
}
void fun(struct Stu* p)
{
	printf("%s\n", (*p).name);
	return;
}
void 结构体打印_题2()
{
	struct Stu students[3] = { {1001,"Z",30} ,{1002,"W",10}, {1003,"F",18} };
	fun(students + 1);   //输出的是什么呢？
	return 0;
}
int main()
{
	结构体打印_题1();
		结构体打印_题2();
		return 0;
}