//int fseek(FILE*stream, long offset,int origin)
/*				pf			偏移量			3种 
origin: SEEK_CUR:从文件指针的当前位置
		SEEK_END;文件末尾位置
		SEEK_SET;文件起始位置
*/
//ftell		计算出指针对起始位置的偏移量
//rewind	重置指针位置到起始位置
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void fseek_use()
{
	FILE* pf = fopen("D:\\代码C++\\文件操作练习的临时文件夹\\test0004.txt", "r");
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
	fgetc(pf);           //会引起偏移
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