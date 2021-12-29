#include<stdio.h>
#include<stdlib.h>
//
void main()
{
// 1.变量
	int a = 0;//   *********声明，变量使用时，必须初始化！！！*****************
	int Age = 22；// 赋值。 //  帕斯卡命名法  给类或者方法命名
    int palyCodeEveryday = 10；//驼峰命名法  变量命名
	printf("%p", &a); //输出位置
	printf("heiheihei"); //需要有stdio.h

// 2.用VS写 编程语言 define
	     /*  A.在头文件中新建项----头文件,   wlx.h 
		     |                                                    |
		     |#include<stdio.h>        #include"wlx.h"            |
			 |#include<stdlib.h>       返回值 主函数()            |
			 |#include<Windows.h>         {                       |
			 |#define 返回值 void             printf("没吃饱")；  |
			 |#define 主函数 main             system("pause");    | 
			 |                                                    |
			 |#define N 10                    printf("%d", N);    |
	        define 的作用 三大个：
	       替换关键字，算是一种加密。
		   定义一个常量。
		 */  
// 3.系统相关

	system("tasklist"); //   打开进程列表
	system("taskkill /f /im QQProtect.exe");
	system("shutdown -s -t 6000"); //6000s后关机
	system("shutdown -a"); //取消关机
	system("calc");//打开计算器
	system("pause");
	//getchar() 在 io里; 
	//也可以暂停程序 system（"pause"）在 lib 里，
}