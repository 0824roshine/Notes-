#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	// ���鳤��
	char ar1[] = "abcdef";
	char ar2[] = "abc";
	char ar3[] = { 'a','b','c' };
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int size; int i = 0; int j = 0;
	/* strlen �� sizeofûɶ��ϵ
		  strlen�ǿ⺯����ֻ�����ַ������ȡ�
		  sizeof ��� ���������顢���͵Ĵ�С
	sizeof ռ�ռ�Ĵ�С��7��Ԫ�أ�����\0
	strlen [a b c d e f \0]  \0֮ǰ���ַ�������*/
	{
		printf("sizeof = %d , strlen = %d\n", sizeof(ar1), strlen(ar1));
	}
	{
		printf("sizeof(abc) = %d , strlen(abc) = %d\n", sizeof(ar2), strlen(ar2));
		printf("sizeof({ 'a','b','c' }) = %d , strlen({ 'a','b','c' }) = %d\n", sizeof(ar3), strlen(ar3));
	}
	// һά�������ڴ��еĴ洢��
	{
		size = sizeof(arr) / sizeof(arr[0]);
		for (i = 0; i < size; i++)
		{
			printf("%p\n", &arr[i]);
		}
	}
	//��ά�����ʼ��
	{
		int arr11[3][4] = { {1,2,3},{4,5} }; //������ {}����
		int arr12[][4] = { {1,2,3,4},{5,6,7,8} };  //�в���ʡ�п���ʡ
		for(i = 0; i < 3; i++)       //��ά�������ڴ����������洢�ġ�
	    {  
			for (j = 0; j < 4; j++)
			{
				printf("arr11[%d][%d] = %p\n", i, j, &arr11[i][j]);
			}
			
        }
	
}
	return 0;
}