#define _CRT_SECURE_NO_WARNINGS 1// Դ�ļ���һ��
#include<stdio.h>
#include<stdlib.h>
int main()
{
// �ֽ�-��������
	printf("%d\n", sizeof(char));     //1
	printf("%d\n", sizeof(short));    //2
	printf("%d\n", sizeof(int));      //4
	printf("%d\n", sizeof(long));      //4
	printf("%d\n", sizeof(long long)); //8
	printf("%d\n", sizeof(float));     //4
	printf("%d\n", sizeof(double));     //8
/*ȫ�ֱ��� ��{} ֮��
�ֲ���������     ��               ͬ��ʱ���ֲ��������ȼ�����ȫ�ֱ�������ͬ����
 �ֲ��������������ڵ�ǰ�����(��������)�ڡ�
 ȫ�ֱ��������������������̣���������Ҳ�����á�
 ������extern �����ⲿ���ţ�����Դ�ļ��ﶨ���ȫ�ֱ���������������������������������������������������������������������������������������������remain*/
	{
		int num = 0;
		printf("num=%d\n", num);
	}
//1.��������
	const int cbl = 111;
//	int arr[cbl]= {0};
//	n = 20;
	
// 2.#define ����ı�ʶ��������
#define MIN 0��
//3. enum����ö�ٳ�����
	enum PEOPLE
	{
		MONKEY,
		HUMan,
	};
	printf("%d", HUMan);
	return 0;
}