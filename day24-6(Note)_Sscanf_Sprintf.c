#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
/*
scanf/printf    针对  标准  输入/出流的，格式化输入输出语句
fscanf/fprintf  针对  所有  输入/出流的，格式化输入输出语句
sscanf/sprintf  sscanf    从字符串中读取格式化的数据
				sprintf   吧格式化的数据输出成(存储到)字符串


*/
void sscanf_sprintf()
{
	struct S
	{
		int m;
		double n;
		char arr[10];
	};
	struct S s1 = { 100,2.718,"accde" };
	struct S s2 = { 0 };
	char buf[1024] = { 0 };
	//把格式化的数据转化成字符储存到buf
	sprintf(buf, "%d %f %s", s1.m, s1.n, s1.arr);
	printf("%s\n\n", buf);
//从buf中读取格式化的数据到tmp
	sscanf(buf, "%d %f %s", &(s2.m), &(s2.n),&(s2.arr));
	printf(buf, "%d %f %s\n", s2.m, s2.n, s2.arr);
}

int main()
{
	sscanf_sprintf();
	return 0;
}