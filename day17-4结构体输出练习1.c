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
void �ṹ���ӡ_��1()
{
	struct S a, * p = &a;
	a.a = 99;
	printf("%d\n", a.a);    //������3�ַ����ܴ�ӡ
	printf("%d\n", (*p).a);
	printf("%d\n", p->a);
}
void fun(struct Stu* p)
{
	printf("%s\n", (*p).name);
	return;
}
void �ṹ���ӡ_��2()
{
	struct Stu students[3] = { {1001,"Z",30} ,{1002,"W",10}, {1003,"F",18} };
	fun(students + 1);   //�������ʲô�أ�
	return 0;
}
int main()
{
	�ṹ���ӡ_��1();
		�ṹ���ӡ_��2();
		return 0;
}