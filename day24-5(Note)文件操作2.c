#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
struct S
{
	int n; float score; char arr[10];
};
void test_���ļ��ж�ȡ�������Ļ()
{
	char buf[1024] = { 0 };
	FILE* pf = fopen("D:\\����C++\\�ļ�������ϰ����ʱ�ļ���\\test0001.txt", "r");
	FILE* pf2 = fopen("D:\\����C++\\�ļ�������ϰ����ʱ�ļ���\\test0002.txt", "r");
	if (pf == NULL)
	{
		printf("%s", strerror(errno));
		return 0;
	}
	{
		fgets(buf, 1024, pf);
		printf("%s\n", buf);
		puts(buf);
	}
//��ʽ����д��
	{
		fprintf(pf, "%d %f %s", 10, 3.14, "haha");
	}
	{
		struct S s1;
		fscanf(pf2, "%d %f %s", &(s1.n), &(s1.score), &(s1.arr) );
		printf("%d %f %s", s1.n, s1.score, s1.arr);
	}
	fclose(pf);
	pf = NULL;
}
void test_��_��׼������_��ȡ�����_��׼�����()
{
	char buf[1024] = { 0 };
	fgets(buf, 1024, stdin);
	fputs(buf, stdout);
}

int main()
{
	test_���ļ��ж�ȡ�������Ļ();
	test_��_��׼������_��ȡ�����_��׼�����();
	return 0;
}
