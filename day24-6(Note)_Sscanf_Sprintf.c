#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
/*
scanf/printf    ���  ��׼  ����/�����ģ���ʽ������������
fscanf/fprintf  ���  ����  ����/�����ģ���ʽ������������
sscanf/sprintf  sscanf    ���ַ����ж�ȡ��ʽ��������
				sprintf   �ɸ�ʽ�������������(�洢��)�ַ���


*/
void sscanf_sprintf()
{
	struct S
	{
		int m;
		double n;
		char arr[10];
	};
	struct S s1 = { 100,2.718,"accde" };
	struct S s2 = { 0 };
	char buf[1024] = { 0 };
	//�Ѹ�ʽ��������ת�����ַ����浽buf
	sprintf(buf, "%d %f %s", s1.m, s1.n, s1.arr);
	printf("%s\n\n", buf);
//��buf�ж�ȡ��ʽ�������ݵ�tmp
	sscanf(buf, "%d %f %s", &(s2.m), &(s2.n),&(s2.arr));
	printf(buf, "%d %f %s\n", s2.m, s2.n, s2.arr);
}

int main()
{
	sscanf_sprintf();
	return 0;
}