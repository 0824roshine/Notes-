#include<stdio.h>
int main()
{
	int a = 1;
	char* p2 = &a;
	char aa = -1;
	signed char bb = -1;
	unsigned char cc = 1;
	char sb = -128;
//整型提升不改变符号。
	printf("%d %d %d\n", aa, bb, cc);
	printf("%u\n", sb);
	if (*p2 == 0)
		printf("大端排序");
	else
		printf("小端排序");

	return 0;
}
int check_sys()   //精简版！！！
{
	int a = 1;
	return *(char*)&a;
}