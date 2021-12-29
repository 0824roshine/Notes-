#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
//浮点数 科学计数法  *字符_*  

void main()
{
// 浮点数
	float a = 10.1f;   //float 有效位数     6·7位
	double b = 10.0;   //默认 15-16位
	long double c = 10.00;
	printf("%d , %d\n ", sizeof(float), sizeof(double));
//科学计数法：   1.23e3       1.333e+002

//字符变量 字符常量 字符串常量 
	char d = 'a';  
	printf("%d ,%d\n",sizeof(d), sizeof('a'));

	/*a 是变量，'a'是常量，字符常量和字符变量的长度是不一样的。     
	字符常量赋予给变量时会裁剪长度。*/

	printf("%d ,%d ,%d\n", sizeof("a"), sizeof('a'), sizeof(""));
	
	//双引号是字符串！长度至少是一 ""包含一个 \0.

	//宽字符和窄字符 宽 是汉字，占两个
	wchar_t p = '哈';
	printf("%d ,%d ,%d\n", sizeof("a"), sizeof("和"),sizeof(p));
//ASCII码
	//字符在内存中的表现形式,
	int a1 = 1;
	char a2 = '1';
		printf("%d, %d\n", sizeof(a1), sizeof(a2));
	system("pause");
}

