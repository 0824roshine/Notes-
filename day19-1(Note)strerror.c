#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<errno.h>
int main()
{
	char* str1 = strerror(0); 
	char* str2 = strerror(1); 
	char* str3 = strerror(2);
	char* str4 = strerror(errno);   // 是一个全局的错误码变量。
//  当 库函数在执行过程中，发生了错误，就会把对应的错误码，复制到errno中。.
	printf("%s\n%s\n%s\n%s\n", str1, str2, str3,str4);
	FILE* pf = fopen("a.txt", "r");
	if (pf == NULL)
		printf("%d,%s\n",errno, strerror(errno));
	else
		printf("open file success\n");
	return 0;
}