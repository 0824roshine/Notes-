#include<stdio.h>
//ö�ٵĿ���ȡֵ�ǳ�����
/*
 1.�����˿ɶ��Ժ�ά���ԡ�
 2. ��ֹdefine����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ�
 3.��ֹ��������Ⱦ
 4.��define��ȣ������ڵ���
 5.ʹ�÷��㣬����һ�ζ�����������
 */
enum Sex
{
	male = 1,
	famale = 2,
	secret = 0
};
enum Color
{
	RED,
	GREEN,
	BLUE
};
void enum_how_to_use()
{
	printf("%d %d %d\n", male, famale, secret);
	printf("%d %d %d\n", RED, GREEN, BLUE);
}
//������==������  
//��Ա����ͬһ���ڴ�ռ䣬�����Ĵ�С������Ա��
//��ͬ��Ա����ͬʱ��
union UN
{
	char c;
	int i;
};
void union�ĵ�ַ()
{
	union UN u;
	printf("%d %p %p %p\n", sizeof(u), &u, &(u.c), &(u.i));
}
//������Ĵ�С����������Ա�Ĵ�С��
//��  ����Ա�Ĵ�С  ����   ��������  ��������ʱ����Ҫ����
void union�Ĵ�С()
{
	union UUUN
	{
		int a;         // ��������4 ��Ա��С4    8
		char arr[5];   //     ������1 ����Ա5
	}uuu;
	printf("%d\n", sizeof(uuu));
}

int main()
{
	enum_how_to_use();
	union�ĵ�ַ();
	union�Ĵ�С();
	//�������	enum Color c = 2; ��Ȼc����������c++�ᡣ
	return 0;
}