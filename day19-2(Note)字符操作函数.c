#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void 字符判断()
{
	char ch = '@';
	int ret1 = islower(ch);
	int ret2 = isdigit(ch);
	printf("ret1 = %d ret2 = %d\n", ret1,ret2);
}
void 大小写转化()
{
	char ch1 = tolower('Q');
	char ch2 = toupper('a');
	putchar(ch1); putchar(ch2);
}
int main()
{
	字符判断();
	大小写转化();
}
