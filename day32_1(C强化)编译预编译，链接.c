#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<windows.h>
#include<stdio.h>
//预编译时执行#的语句
//编译：转换成二进制格式，以.obj形式存在，每次编译只能编译一个源文件。
//链接：将多个编译生成的文件组合
void open()
{
	system("\"C:\\Program Files (x86)\\Tencent\\QQ\\Bin\\QQ.exe\"");
}
void openqq()
{
	ShellExecuteA(0, "open", "\"C:\\Program Files (x86)\\Tencent\\QQ\\Bin\\QQ.exe\"", 0, 0, 1);
	// 0隐藏，1正常，6最小，3最大
}
void close()
{
	system("taskkill/f  /im QQ.exe");
}
void times(int num)
{

	int i = 0;
	while (i < num)
	{
		Sleep(1000);
		i++;
		printf("%d", num - i);
	}
}
void main()
{
	putchar('\101');//101八进制为65 A
	putchar('\x61');//  97= a
	putchar(48);

	int num = 0;
	scanf("%d", &num);
	openqq();
	times(num);
	close();
}
