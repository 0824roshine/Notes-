#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<errno.h>
int main()
{
	char* str1 = strerror(0); 
	char* str2 = strerror(1); 
	char* str3 = strerror(2);
	char* str4 = strerror(errno);   // ��һ��ȫ�ֵĴ����������
//  �� �⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬���Ƶ�errno�С�.
	printf("%s\n%s\n%s\n%s\n", str1, str2, str3,str4);
	FILE* pf = fopen("a.txt", "r");
	if (pf == NULL)
		printf("%d,%s\n",errno, strerror(errno));
	else
		printf("open file success\n");
	return 0;
}