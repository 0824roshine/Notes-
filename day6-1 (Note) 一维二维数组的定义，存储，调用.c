#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	// 数组长度
	char ar1[] = "abcdef";
	char ar2[] = "abc";
	char ar3[] = { 'a','b','c' };
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int size; int i = 0; int j = 0;
	/* strlen 和 sizeof没啥关系
		  strlen是库函数，只能求字符串长度。
		  sizeof 算符 变量、数组、类型的大小
	sizeof 占空间的大小，7个元素，包括\0
	strlen [a b c d e f \0]  \0之前的字符个数。*/
	{
		printf("sizeof = %d , strlen = %d\n", sizeof(ar1), strlen(ar1));
	}
	{
		printf("sizeof(abc) = %d , strlen(abc) = %d\n", sizeof(ar2), strlen(ar2));
		printf("sizeof({ 'a','b','c' }) = %d , strlen({ 'a','b','c' }) = %d\n", sizeof(ar3), strlen(ar3));
	}
	// 一维数组在内存中的存储。
	{
		size = sizeof(arr) / sizeof(arr[0]);
		for (i = 0; i < size; i++)
		{
			printf("%p\n", &arr[i]);
		}
	}
	//二维数组初始化
	{
		int arr11[3][4] = { {1,2,3},{4,5} }; //可以用 {}换行
		int arr12[][4] = { {1,2,3,4},{5,6,7,8} };  //列不能省行可以省
		for(i = 0; i < 3; i++)       //二维数组在内存中是连续存储的。
	    {  
			for (j = 0; j < 4; j++)
			{
				printf("arr11[%d][%d] = %p\n", i, j, &arr11[i][j]);
			}
			
        }
	
}
	return 0;
}