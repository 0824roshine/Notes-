// �ı��ļ��Ͷ������ļ�
// �������ڴ����Զ����ƴ洢���������ת�����������棬���Ƕ������ļ�
// ���������asc��洢������Ҫ�ڴ���ǰת������asc��洢�ľ����ı��ļ�

//			����                  ��Ļ
//		 �Ӽ�������            ����Ļ���
//       ��׼�����豸          ��׼����豸
//        ���̺���Ļ����һ������Ĭ�ϴ򿪵��������豸
//   stdin FILE*   stdout FILE*  stdsrr FILE*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<string.h>
void test1()
{
	int a = 10000;
	FILE* pf = fopen("test1.txr", "wb");
	fwrite(&a, 4, 1, pf);
	fclose(pf);
	pf = NULL;
}
//�ļ�������-���ڴ�ʹ���֮�������  (�ļ��������ַ�Ϊ���뻺���������������)
void test2()
{
	FILE* pf01 = fopen("test1.txt", "r"); //���·��
	FILE* pf02 = fopen("D:\\����C++\\�ļ�������ϰ����ʱ�ļ���\\test0001.txt", "r");//����·��
//�򿪳ɹ���᷵��ָ�룬ʧ����ΪNULL
	if (pf01 == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	if (pf02 == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fclose(pf01);
	fclose(pf02);
	pf01 = NULL;
	pf02 = NULL;

}
void test_of_fputc_and_pfwrite()
{
	FILE* pfWrite = fopen("test2.txt", "w");
	if (pfWrite == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	fputc('F', pfWrite);
	fclose(pfWrite);
	pfWrite = NULL;
}
void test_of_fgetc_and_pfread()
{
	FILE* pfRead = fopen("test2.txt", "r");
	if (pfRead == NULL)
	{
		printf("%s\n", strerror(errno));
		return 0;
	}
	printf("%c",fgetc(pfRead));
	fclose(pfRead);
	pfRead = NULL;
}

int main()
{
	test1();
	test2();
	test_of_fputc_and_pfwrite();
	test_of_fgetc_and_pfread();
	return 0;
}