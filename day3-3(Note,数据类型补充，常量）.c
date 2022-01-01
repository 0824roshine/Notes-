#define _CRT_SECURE_NO_WARNINGS 1// 源文件第一行
#include<stdio.h>
#include<stdlib.h>
int main()
{
// 字节-数据类型
	printf("%d\n", sizeof(char));     //1
	printf("%d\n", sizeof(short));    //2
	printf("%d\n", sizeof(int));      //4
	printf("%d\n", sizeof(long));      //4
	printf("%d\n", sizeof(long long)); //8
	printf("%d\n", sizeof(float));     //4
	printf("%d\n", sizeof(double));     //8
/*全局变量 在{} 之外
局部变量。。     内               同名时，局部变量优先级大于全局变量（别同名）
 局部变量的作用域在当前代码块(即大括号)内。
 全局变量的作用域是整个工程，即函数里也可以用。
 可以用extern 声明外部符号（其他源文件里定义的全局变量）————————————————————————————————————————————remain*/
	{
		int num = 0;
		printf("num=%d\n", num);
	}
//1.常变量：
	const int cbl = 111;
//	int arr[cbl]= {0};
//	n = 20;
	
// 2.#define 定义的标识符常量。
#define MIN 0；
//3. enum定义枚举常量、
	enum PEOPLE
	{
		MONKEY,
		HUMan,
	};
	printf("%d", HUMan);
	return 0;
}