#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//在文件读取过程中，并不能用feof的返回值判断文件读取是否结束。

//而是应该，在文件读取已经结束时，是读取失败结束，还是文件尾。
/*
	1.读取结束时，  NULL,  EOF,
	2.二进制文件读取结束时，fread判断返回值是否小于实际要读的个数。
*/
//  用fp
void feof_use()
{
	FILE* pf = fopen("D:\\代码C++\\文件操作练习的临时文件夹\\test0005.txt", "r");
	if (pf == NULL)
		return;
	int ch = fgetc(pf);
	printf("%d", ch);
	fclose(pf);
	pf = NULL;
}
void perror_EOF_ferror_feof()
{
	FILE* pf3 = fopen("D:\\代码C++\\文件操作练习的临时文件夹\\test5.txt", "r");
	if (!pf3)
	{
		perror("hehe");
	}
	FILE* pf2 = fopen("D:\\代码C++\\文件操作练习的临时文件夹\\test0004.txt", "r");
	char  c =0;
	while ((c = fgetc(pf2)) != EOF)
		putchar(c);
	if (ferror(pf2))
		puts("IOerror when reading");
	else if (feof(pf2))
		puts("End ofFile reached successfully");
	fclose(pf2);
	pf2 = NULL;
}
int main()
{
	feof_use();
	perror_EOF_ferror_feof();
	return 0;
}