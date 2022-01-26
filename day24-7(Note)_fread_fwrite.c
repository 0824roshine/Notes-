#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
struct S
{
	char name[10];
	int age;
	double score;
};
void fwrite_fread()
{
// fwrite
	{
		struct S s = { "tom",10,1.1 };
		FILE* pf = fopen("D:\\代码C++\\文件操作练习的临时文件夹\\test0003.txt", "wb");
		if (pf == NULL)
			return;
		fwrite(&s, sizeof(struct S), 1, pf);
		fclose(pf);
		pf = NULL;
	}
// fread
	{
		struct S s1 = { 0 };
		FILE* pf1 = fopen("D:\\代码C++\\文件操作练习的临时文件夹\\test0003.txt", "rb");
		if (pf1 == NULL)
			return;
		fread(&s1, sizeof(struct S), 1, pf1);
		printf("%s %d %f\n", s1.name, s1.age, s1.score);
		fclose(pf1);
		pf1 = NULL;
	}
	
}
int main()
{
	fwrite_fread();
	return 0;
}
