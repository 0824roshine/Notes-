#include<stdio.h>
#include<string.h>
int main()
{
	char a = -128; char b = 128;     //�������ֿ��Է���һ��?�000-127----��-128��----��-1��
	unsigned int i;
	unsigned char k = 0;
	int j = 0;
	char ch[1000];
	printf("%u  %u\n", a, b);
	for (j = 0; j < 1000; j++)
	{
		ch[j] = -1 - j;
	}
	for (k = 0; k <=255; k++)    //����unsigned char �Ǻ�С��255�ģ�����˵����ѭ��  255+1 = 0��
	{
		printf("���� ");
	}
	printf("%d",strlen(ch));
	//for (i = 9; i >= 0; i--)
	//{
	//	printf("%u   ", i);
	//}
	return 0;
}