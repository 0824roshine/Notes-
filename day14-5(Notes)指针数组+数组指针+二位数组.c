#include<stdio.h>
/*______________________һ�������д�����ַ������������Բ�����
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
			printf("%d ", (*(pp + i))[j]); //p+i �Ƕ�λ�еĵ�ַ,
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
//��ͬ�ַ����ĵ�ַ��һ���ġ�
	{
		char arr1[] = "abcdef";
		char arr2[] = "abcdef";
		const char* p1 = "abcdef";
		const char* p2 = "abcdef";
		if (p1 == p2)
			printf("һ��\n");
		else
			printf("��һ��\n");
	}
//ָ������
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
//����ָ��   �������е����ڴ�����и��ϡ�

//һ������������ӣ���ά������鷳��
	{
		int Arr[9] = { 1,2,3,4,5,6,7,8,9 };
		int(*p)[9] = &Arr;  //�������ĵ�ַ��
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
//��ά����
	{
		int ARR[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	    /*ARR��������3��Ԫ�ص�һά���飬
		��i��Ԫ����i�еĵ�ַ��
		 */
		My_print(ARR, 3, 5);
	}

//ָ������&����ָ��
	char* AR[5];
	char* (*Pa)[5] = &AR;  //pa��ָ�룬ָ������������Ԫ�صģ�pa�����֣�char�����͡�
	return 0;
}