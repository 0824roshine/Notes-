#define _CRT_SYSTEM_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
// debug ��release�� debug ���԰汾 release �����汾��release ���Ż�һЩ
/*��ݼ�
  F5��F9 ���ʹ��
* F9�л��ϵ� F5ֱ���ӵ���һ���߼��ϵ紦
* F11 �����     shift+F11������ǰ����
}*/
/*����
 �Զ� �Ĵ���
 ���ö�ջ  ��������ǰ�ĺ��������߼�
}*/
void My_strcpy(char* dest, char* src)
{
	if (dest != NULL && src != NULL)
	{
		while (*dest++ = *src++)
			;
	}
}
void My_strcpy1(char* dest, char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
		;
}
//����  ����
void My_strcpy2(char* dest,const char* src)  //const�ܷ�ֹԴ��Ŀ�ĵ�д��������Դ
{
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
		;
}

char* My_strcpy3(char* dest, const char* src)  //�з���ֵ���ܸ��������ʽ���á�
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest++ = *src++)
		;
	return ret;
}
void ջ�ĵ�ַ�ռ�()
{
	int i = 0;       //ջ������ʹ�øߵ�ַ�ռ�
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 1; i <=10; i++)
	{
		printf("%d  ", arr[i]);   // release���Ż� i�ĵ�ַ����debug����
		arr[i] = 0;
	}
}
//��������������bug�٣��ɶ��Ժã���ά���Ըߣ�ע��������ĵ���ȫ��
int mian()
{
	const int num =10;
	const int* p1 = &num;   //�������ε��� *p  ,����ͨ��p������ num
	int* const p2 = &num; //�����const���Ƶ���ָ�������
}
/*�﷨���󣺿���˫���������������С�
�����ʹ������д���
*/