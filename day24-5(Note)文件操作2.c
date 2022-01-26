#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
struct S
{
	int n; float score; char arr[10];
};
void test_从文件中读取输出到屏幕()
{
	char buf[1024] = { 0 };
	FILE* pf = fopen("D:\\代码C++\\文件操作练习的临时文件夹\\test0001.txt", "r");
	FILE* pf2 = fopen("D:\\代码C++\\文件操作练习的临时文件夹\\test0002.txt", "r");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
	{
		fgets(buf, 1024, pf);
		printf("%s\n", buf);
		puts(buf);
	}
//格式化的写入
	{
		fprintf(pf, "%d %f %s", 10, 3.14, "haha");
	}
	{
		struct S s1;
		fscanf(pf2, "%d %f %s", &(s1.n), &(s1.score), &(s1.arr) );
		printf("%d %f %s", s1.n, s1.score, s1.arr);
	}
	fclose(pf);
	pf = NULL;
}
void test_从_标准输入流_读取输出到_标准输出流()
{
	char buf[1024] = { 0 };
	fgets(buf, 1024, stdin);
	fputs(buf, stdout);
}

int main()
{
	test_从文件中读取输出到屏幕();
	test_从_标准输入流_读取输出到_标准输出流();
	return 0;
}
