#include<stdio.h>
#include<stdlib.h>
//加密
void main1()
{
	//输入字母输出数字
	char ch = getchar();
	if (ch <= 'F')
	{
		ch = ch - 17;
	}
	putchar(ch);
	system("pause");

}
void main2()
{
	char ch[10] = { 'c','a','l','c' };
	system(ch);
	for (int i = 0; i < 4; i++)
	{
		ch[i] = ch[i] - 30;
	}
	printf("%s", ch);
	system("pause");
}
//隐式（强制）类型转换、
void main()
{
//  隐式
	int a = 1;// 4字节
	double b = 0.2;  // 8字节
	printf("%f\n", a + b);
	printf("%f\n", 10 + b + 'a' + 'b' * 0.0001);
// 强制   大转小
  //1. double 转int，
	double c = 3.14;
	printf("%d\n", (int)c);   //这里也可以用表达式
	   //system("pause");
	int f = c;
	printf("%d\n", f);
	   //system("pause");
  //2.char 转 int
	char g = 'a';
	int h = g;
	printf("%d\n", h);
	double k = 10.000+20.92+10.1+11;
	printf("%.3f", k);
	system("pause");



}
