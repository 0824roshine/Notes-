#define _CRT_SECURE_NO_WARNINGS
#pragma warning(2:4235)
#include<stdlib.h>
#include<windows.h>
#include<stdio.h>
#define M 10
// ���ܼӣ����˾���һ���滻
// ������ȷ�����������޸�
int main()
{
	//�Ĵ����ܸ�ֵ��a+1ʱͨ���Ĵ�����ɵ�
	//�����������ڴ��У���ֵ��ͨ���Ĵ������
	//c���Բ����Ĵ���������ֱ�Ӳ����ڴ档������Զ��ɡ�
	int a;

	printf("%p", &a);
	a = 012; //�������ķ��ű�
	/*__asm
	{
		mov  RAX, 10
		mov  a, RAX
	}*/
	//�Ĵ������ܴ����ڴ��ַ�����ܼ���޸�
	printf("%d", a);
	return 0;
}