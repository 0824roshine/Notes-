#include<stdio.h>
#include<string.h>
#include<assert.h>
/*_____________________________________________________________________
求字符串长度：strlen

长度不受限制的字符串函数： strcpy,strcat,strcmp

长度受限制的字符串函数： strncpy,strncat,strncmp

字符串查找：strstr,strtok

错误信息：strerror

内存操作函数: memcpy,memmove,memset,memcmp;
*/
void 关于strlen返回无符号数这件事()  // size_t = unsigned int
{
	if (strlen("h") - strlen("hh") < 0)
		printf("hhhh");
	else
		printf("xxxx");
}
int My_strlen_计数器(const char* str)
{
	assert(str != NULL);
	int count = 0;
	while(*str!='\0')
	{
		count++;
		str++;
	}
	return count;
}
char* My_strcpy(char* destination,const char* source) //目标空间不能是字符串常量
{
	assert(destination!=NULL);
	assert(source != NULL);
	char* ret = destination;
	while (*destination++ = *source++) // 包含\0，
	{ ; }
	return ret;//返回起始地址
}
char* My_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest!=NULL);
	assert(src != NULL);
	while (*dest != '\0')
		dest++;
	while (*dest++ = *src++)
		;
	return ret;
}
int My_strcmp(const char* ar1,const char* ar2)
{
	assert(ar1!=NULL);
	assert(ar2 != NULL);
	while (*ar1++ == *ar2++)
	{
		if (*ar1 == *ar2)
			return 0;    
	}
	if (*ar1 > *ar2)
		return 1;
	else
		return -1;
}
int My_strcmp2(const char* ar1, const char* ar2)
{
	assert(ar1 != NULL);
	assert(ar2 != NULL);
	while (*ar1++ == *ar2++)
	{
		if (*ar1 == *ar2)
			return 0;
	}
	return (*ar1 - *ar2);
}
int main()
{
	int Len_1 = strlen("abcdef");
	char arr1[] = { 'a','b','c' };
	char arr2[] = "bit";
	char arr3[] = "abcdef";
	char arr4[30] = "ghijkl";
	char arr5[20] = "abcdef";
	int Len_2 = strlen(arr1); //必须要有\0结尾
	My_strcat(arr4, arr3);
	int cmp1 = strcmp(arr3, arr5); int cmp2 = strcmp(arr3, arr4); int cmp3 = strcmp(arr4, arr3);
	int mycmp1 = My_strcmp(arr3, arr5); int mycmp2 = My_strcmp(arr3, arr4); int mycmp3 = My_strcmp(arr4, arr3);
	int mycmp4 = My_strcmp2(arr3, arr5); int mycmp5 = My_strcmp2(arr3, arr4); int mycmp6 = My_strcmp2(arr4, arr3);
	printf("%d  %d %s\n", Len_1, Len_2,arr4);
	printf("%d %d %d\n", cmp1, cmp2, cmp3);
	printf("%d %d %d\n", mycmp1, mycmp2, mycmp3);
	printf("%d %d %d\n", mycmp4, mycmp5, mycmp6);
	return 0;
}