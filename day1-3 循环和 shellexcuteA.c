#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
//do-whlie练习    for练习+ shellExcuteA指令；

     // while 是先执行，再判断；若非真，则结束。
void main()
{
	int i = 0;
	do
	{
		printf("自闭了%d天\n\n",i--);
	} while (i == 1);
	int j= 1;
	do
	{
		printf("自闭了%d天\n\n", j--);
	} while (j == 1);
    // for （初始化;判断;变量增量;)
	//初始化只做一次；变量增量在循环语句之后进行。       shellExcuteA指令
	for(int k = 0;k<= 3; k++)
	{
		ShellExecuteA(0, "open", "\"C:\\Program Files(x86)\\Tencent\\QQ\\Bin\\QQScLauncher.exe\"", 0, 0, 2);
		//0代表系统打开，open，地址，注意加/和*,两个默认的0；最后一位 0隐藏打开，1最小化，2正常，3最大化
	}
	system("pause");
}
