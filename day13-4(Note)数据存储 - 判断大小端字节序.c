#include<stdio.h>
int main()
{
	int a = 1;
	char* p2 = &a;
	char aa = -1;
	signed char bb = -1;
	unsigned char cc = 1;
	char sb = -128;
//�����������ı���š�
	printf("%d %d %d\n", aa, bb, cc);
	printf("%u\n", sb);
	if (*p2 == 0)
		printf("�������");
	else
		printf("С������");

	return 0;
}
int check_sys()   //����棡����
{
	int a = 1;
	return *(char*)&a;
}