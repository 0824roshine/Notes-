#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//���ļ���ȡ�����У���������feof�ķ���ֵ�ж��ļ���ȡ�Ƿ������

//����Ӧ�ã����ļ���ȡ�Ѿ�����ʱ���Ƕ�ȡʧ�ܽ����������ļ�β��
/*
	1.��ȡ����ʱ��  NULL,  EOF,
	2.�������ļ���ȡ����ʱ��fread�жϷ���ֵ�Ƿ�С��ʵ��Ҫ���ĸ�����
*/
//  ��fp
void feof_use()
{
	FILE* pf = fopen("D:\\����C++\\�ļ�������ϰ����ʱ�ļ���\\test0005.txt", "r");
	if (pf == NULL)
		return;
	int ch = fgetc(pf);
	printf("%d", ch);
	fclose(pf);
	pf = NULL;
}
void perror_EOF_ferror_feof()
{
	FILE* pf3 = fopen("D:\\����C++\\�ļ�������ϰ����ʱ�ļ���\\test5.txt", "r");
	if (!pf3)
	{
		perror("hehe");
	}
	FILE* pf2 = fopen("D:\\����C++\\�ļ�������ϰ����ʱ�ļ���\\test0004.txt", "r");
	char  c =0;
	while ((c = fgetc(pf2)) != EOF)
		putchar(c);
	if (ferror(pf2))
		puts("IOerror when reading");
	else if (feof(pf2))
		puts("End ofFile reached successfully");
	fclose(pf2);
	pf2 = NULL;
}
int main()
{
	feof_use();
	perror_EOF_ferror_feof();
	return 0;
}