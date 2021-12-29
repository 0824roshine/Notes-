#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<limits.h>
//转义字符   进制 8-16-32-64
void main()
{
	int a = 0;
	while (a < 3)
	{
		printf("\n");
		Sleep(100);//等ms
		printf("转义");
		a++;
		Sleep(50);
		printf("\t");
		printf("字符");
	}
	printf("%d\n", 0x12); // 16进制
	printf("%d\n", 012);  // 8进制
//32位 64 位计算机的区别*****位——计算机的寻址能力
	printf("%p\n", &a);
	/*32位计算机的内存地址是8位，最大寻址能力是4G
	  64位的理论寻址能力是无限的
	*/

//数据类型**********
	printf("%f\n", (float)a); 
	/*1.不匹配时，可以强行改变
	  2.类型一定匹配对应
	  3.数据类型的作用：
	     a.解析方式     
		 b.长度   
		      变量地址我们知道开头，但是结尾由数据类型推算，
			  即往开头后移动几位，int 4个，double 8个，char 1个
			  char 8位  short[int] 16位-----long[int] 32位----float 32位
			  char的有符号-128~127，无符号 0~256
	*/
	int a1 = 10u; //(无符号正整数)
	int a2 = 10l;//(long[int] 长整形)
	int a3 = 10ll;//(long long )
	int b1 = 1;
	short int b2 = 2;
	long int b3 = 3;
	printf("%d ,%d ,%d\n", sizeof(int), sizeof(short int), sizeof(long int));
	short int amax = SHRT_MAX;
	short int amin = SHRT_MIN;
	unsigned short int bmax = USHRT_MAX;
	long int cmax = LONG_MAX;
	long int cmin = LONG_MIN;
	printf("%d ,%d ,%d ,%d ,%d\n",amax, amin, bmax,cmax, cmin);
// sizeof 是一个运算符   ？？？？？？？？？
	system("pause");
}