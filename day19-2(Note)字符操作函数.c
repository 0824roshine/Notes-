#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void �ַ��ж�()
{
	char ch = '@';
	int ret1 = islower(ch);
	int ret2 = isdigit(ch);
	printf("ret1 = %d ret2 = %d\n", ret1,ret2);
}
void ��Сдת��()
{
	char ch1 = tolower('Q');
	char ch2 = toupper('a');
	putchar(ch1); putchar(ch2);
}
int main()
{
	�ַ��ж�();
	��Сдת��();
}
