#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
//   void* 通用类型的指针，无类型指针；
// memcpy   memmove  
void* My_memcpy(void* dest, const void* src,size_t num)
{
	assert(dest != NULL);
	assert(dest != NULL);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}

void* My_memmove(void* dest, void* src, size_t num)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(dest != NULL);
	if (src > ((char*)dest + num))
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;      // void不能操作，只能强制类型转化成char*
			++(char*)dest;                // 优先级问题。
			++(char*)src;
		}
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}
struct S
{
	int age;
	char name[20];
};
int main()
{
	int i = 0;
	{
		struct S arr3[] = { {10,"teriri"},{18,"Otto"} };
		struct S arr4[4] = { 0 };
		struct S arr5[4] = { 0 };
		memcpy(arr4, arr3, sizeof(arr3));
		My_memcpy(arr5, arr3, sizeof(arr3));
		printf("%d\n", arr5[1].age);
	}
	{
		int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
		memcpy(arr + 2, arr, 20);
		for (i = 0; i < 10; i++)
			printf("%d,", arr[i]);
		printf("\n");
	}
	{
		int arr_0[] = { 1,2,3,4,5,6,7,8,9,10 };
		My_memcpy(arr_0 + 2, arr_0, 20);
		for (i = 0; i < 10; i++)
			printf("%d,", arr_0[i]);
		printf("\n");
	}
	{
		int arr_1[] = { 1,2,3,4,5,6,7,8,9,10 };
		memmove(arr_1 + 2, arr_1, 20);
		for (i = 0; i < 10; i++)
			printf("%d,", arr_1[i]);
		printf("\n");
	}
	{
		int arr_2[] = { 1,2,3,4,5,6,7,8,9,10 };
		My_memmove(arr_2 + 2, arr_2, 20);
		for (i = 0; i < 10; i++)
			printf("%d,", arr_2[i]);
		printf("\n");

	}
	return 0;
}