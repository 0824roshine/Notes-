// 文本文件和二进制文件
// 数据在内存中以二进制存储，如果不加转换的输出到外存，就是二进制文件
// 在外存上以asc码存储，则需要在储存前转换。以asc码存储的就是文本文件

//			键盘                  屏幕
//		 从键盘输入            从屏幕输出
//       标准输入设备          标准输出设备
//        键盘和屏幕都是一个程序默认打开的两个流设备
//   stdin FILE*   stdout FILE*  stdsrr FILE*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<string.h>
void test1()
{
	int a = 10000;
	FILE* pf = fopen("test1.txr", "wb");
	fwrite(&a, 4, 1, pf);
	fclose(pf);
	pf = NULL;
}
//文件缓冲区-在内存和磁盘之间的区域  (文件缓冲区又分为输入缓冲区和输出缓冲区)
void test2()
{
	FILE* pf01 = fopen("test1.txt", "r"); //相对路径
	FILE* pf02 = fopen("D:\\代码C++\\文件操作练习的临时文件夹\\test0001.txt", "r");//绝对路径
//打开成功后会返回指针，失败则为NULL
	if (pf01 == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	if (pf02 == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fclose(pf01);
	fclose(pf02);
	pf01 = NULL;
	pf02 = NULL;

}
void test_of_fputc_and_pfwrite()
{
	FILE* pfWrite = fopen("test2.txt", "w");
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fputc('F', pfWrite);
	fclose(pfWrite);
	pfWrite = NULL;
}
void test_of_fgetc_and_pfread()
{
	FILE* pfRead = fopen("test2.txt", "r");
	if (pfRead == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	printf("%c",fgetc(pfRead));
	fclose(pfRead);
	pfRead = NULL;
}

int main()
{
	test1();
	test2();
	test_of_fputc_and_pfwrite();
	test_of_fgetc_and_pfread();
	return 0;
}