#define _CRE_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
#include<assert.h>
char* 失败品_my_strstr(const char* p1,const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	if (*p2 == '\0')
		return p1;
	while (*p1)
	{
		while ((*p1 != '\0')&& (*p2 != '\0') && (*p1 == *p2))
		{
			p1++; p2++;
		}
		p1++;
	}
}
char* my_strstr(const char* p1, const char* p2)
{
	assert(p1 != NULL);
	assert(p2 != NULL);
	char* s1 = p1;
	char* s2 = p2;
	if (*p2 == '\0')
		return p1;
	while (*p1)
	{
		while ((*s2 != '\0') && (*s1 != '\0') && (*s1 == *s2))
		{       // while(*s2&&*s1&&(*s2-*s1))
			s1++; s2++;
		}
		if (*s2 == '\0')
			return p1;
		if (*s1 == '\0')  // 提前结束循环可以。
			return NULL;
		s1 = ++p1;
		s2 = p2;
	}
	return NULL;
}
int main()
{
	char* p1 = "abcdefghijkl";
	char* p2 = "def";
	char* ret = strstr(p1, p2);
	if (ret == NULL)
		printf("dont exist\n");
	else
		printf("%s\n", ret);
	char* p3 = "abbbcdef";
	char* p4 = "bbc";
	printf("%s\n", strstr(p3, p4));
	printf("%s\n", my_strstr(p3, p4));
	return 0;
}