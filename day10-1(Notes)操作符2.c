#include<stdio.h>
void test1(int arr[])
{
	printf("%d\n", sizeof(arr));
}
void test2(char ch[])
{
	printf("%d\n", sizeof(ch));
}
void LogicOp_And()//&&
{
	int a = 0, b = 2, c = 3, d = 4, A = 1, B = 2, C = 3, D = 4; int i = 0;
	i = a++ && ++b && d++;
	printf("a = % d  b = % d  c = % d  d = % d  \n", a, b, c, d);
	i = A++ && ++B && D++;
	printf("A= % d  B = % d  C = % d  D = % d  \n", A, B, C, D);
}
void LogicOp_Or()//  ||
{
	int a = 1, b = 2, c = 3, d = 4; int i = 0;
	i = a++ || ++b || d++;
	printf("a = % d  b = % d  c = % d  d = % d  \n", a, b, c, d);
}
int main()
{
// sizeof 补充
	short a = 1; int b = 33;  int c = 11; int d = 0, e = 0;   char ch[10] = { 0 }; int arr[10] = { 0 }; int p = 0;
	printf("%d  ", sizeof(a = 1 + b));
	printf("%d\n", a);
//按位取反 异或补充
	d = c | (1 << 2);  e = d & (~(1 << 2));
	printf("%d  %d\n", d, e);
//数组sizeof
	
		printf("%d\n", sizeof(arr));
		test1(arr);
		printf("%d\n", sizeof(ch));
		test2(ch);
		
//逻辑操作符
		LogicOp_And();
		LogicOp_Or();
//三目操作符
		p = (a > b ? a : b);
		printf("%d \n", p);
		return 0;
}