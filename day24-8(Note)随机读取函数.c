//int fseek(FILE*stream, long offset,int origin)
/*				pf			ƫ����			3�� 
origin: SEEK_CUR:���ļ�ָ��ĵ�ǰλ��
		SEEK_END;�ļ�ĩβλ��
		SEEK_SET;�ļ���ʼλ��
*/
//ftell		�����ָ�����ʼλ�õ�ƫ����
//rewind	����ָ��λ�õ���ʼλ��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void fseek_use()
{
	FILE* pf = fopen("D:\\����C++\\�ļ�������ϰ����ʱ�ļ���\\test0004.txt", "r");
	if (pf == NULL)
		return;
	fseek(pf, 4, SEEK_CUR);
	int ch1 = fgetc(pf);
	printf("%c\n", ch1);

	fseek(pf, -2, SEEK_END);
	int ch2 = fgetc(pf);
	printf("%c\n", ch2);

	fseek(pf, 1, SEEK_SET);
	int ch3 = fgetc(pf);
	printf("%c\n", ch3);

	int pos = ftell(pf);
	fgetc(pf);           //������ƫ��
	int pos1 = ftell(pf);
	printf("%d %d\n", pos, pos1);
	rewind(pf);
	{
		char ch = fgetc(pf);
		printf("%c  ", ch);
		rewind(pf);
		ch = fgetc(pf);
		printf("%c\n", ch);
	}
	fclose(pf);
	pf = NULL;
}
int main()
{
	fseek_use();
	return 0;
}