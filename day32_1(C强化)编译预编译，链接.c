#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<windows.h>
#include<stdio.h>
//Ԥ����ʱִ��#�����
//���룺ת���ɶ����Ƹ�ʽ����.obj��ʽ���ڣ�ÿ�α���ֻ�ܱ���һ��Դ�ļ���
//���ӣ�������������ɵ��ļ����
void open()
{
	system("\"C:\\Program Files (x86)\\Tencent\\QQ\\Bin\\QQ.exe\"");
}
void openqq()
{
	ShellExecuteA(0, "open", "\"C:\\Program Files (x86)\\Tencent\\QQ\\Bin\\QQ.exe\"", 0, 0, 1);
	// 0���أ�1������6��С��3���
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
	putchar('\101');//101�˽���Ϊ65 A
	putchar('\x61');//  97= a
	putchar(48);

	int num = 0;
	scanf("%d", &num);
	openqq();
	times(num);
	close();
}
