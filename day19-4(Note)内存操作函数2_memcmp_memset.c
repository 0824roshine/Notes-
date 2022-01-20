#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
int main()
{
//memcmp
	{
		int arr1[] = { 1,2,3,4,5 };
		int arr2[] = { 1,2,3,4,0 };
		int ret = memcmp(arr1, arr2, 9);
		printf("%d\n", ret);
	}
//memset
	{
		{
			char arr_0[10] = "";
			memset(arr_0, '#', 9);    //这里的10是指10个字节。
			printf("%s  ", arr_0);
		}
		{
			int arr_1[10] = { 0 };
			memset(arr_1, 1, 10);     
			printf("%d", arr_1[0]);
		}
	}
	return 0;
}