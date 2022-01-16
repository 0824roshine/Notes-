#include<stdio.h>
/*______________________一个错误的写法：字符串常量不可以操作！
char* p ="abcdef";
	*p = 'w';
	printf("%s\n", p);
	return 0;
*/
void My_print(int(*pp)[5], int x, int y)
{
	int i = 0, j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
			printf("%d ", *(*(pp + i) + j)); 
		printf("\n");
	}
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
			printf("%d ", (*(pp + i))[j]); //p+i 是定位行的地址,
		printf("\n");                      //*(p+i)= p[i];
	}
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
			printf("%d ", *(pp[i] + j));
		printf("\n");
	}
}
int main()
{
//相同字符串的地址是一样的。
	{
		char arr1[] = "abcdef";
		char arr2[] = "abcdef";
		const char* p1 = "abcdef";
		const char* p2 = "abcdef";
		if (p1 == p2)
			printf("一样\n");
		else
			printf("不一样\n");
	}
//指针数组
	{
		int ar1[] = { 1,2,3,4,5 }, ar2[] = { 3,4,5,6,7 }, ar3[] = { 5,6,7,8,9 };
		int* parr[] = { ar1,ar2,ar3 };
		int jj = 0;
		for (int j = 0; j < 3; j++)
		{
			for (jj=0;jj<5;jj++)
			{
				printf("%d ", *(parr[j] + jj));
			}
		}
		printf("\n");
	}
//数组指针   本质上有点像内存的行列复合。

//一个不方便的例子，单维数组很麻烦。
	{
		int Arr[9] = { 1,2,3,4,5,6,7,8,9 };
		int(*p)[9] = &Arr;  //存放数组的地址。
		int* ppp = Arr;
		for(int ii=0;ii<9;ii++)
		    printf("%d ", (*p)[ii]);
		printf("\n");
		for (int kk = 0; kk < 9; kk++)
			printf("%d ", *(*p + kk));
		printf("\n");
		for (int iii = 0; iii < 9; iii++)
			printf("%d ", *(ppp + iii));
		printf("\n");
	}
//二维数组
	{
		int ARR[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	    /*ARR本质上是3个元素的一维数组，
		第i个元素是i行的地址。
		 */
		My_print(ARR, 3, 5);
	}

//指针数组&数组指针
	char* AR[5];
	char* (*Pa)[5] = &AR;  //pa是指针，指向的数组是五个元素的，pa是名字，char是类型。
	return 0;
}