#include<stdio.h>
#include<stdlib.h>
struct S1
{
	int a;
	char ch;
	double d;
};
void Init(struct S1* tmp)
{
	tmp->a = 22;
	tmp->ch = 'a';
	tmp->d = 2.5;
}
void print1(struct S1 a1)
{
	printf("%d %c %f\n", a1.a, a1.ch, a1.d);
}
void print2(const struct S1 *a1)// better
{
	printf("%d %c %f\n", a1->a, a1->ch,a1->d);
}
int main()
{
	struct S1 a1 = { 0 };
	Init(&a1);
	print1(a1);
	print2(&a1);//只传递4个字节,更好，减小压栈开销。
	return 0;
}