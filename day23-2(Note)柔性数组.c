#include<stdio.h>
#include<malloc.h>
struct S
{
	int n;
	int arr[]; // 或arr[0];
//柔性数组 数组大小可以调整
};
struct S2
{
	int n;
	int *arr;
};
void sizeof柔性数组()
{
	struct S s01;
	printf("%d", sizeof(s01));
}
void 柔性数组的使用()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
	int i = 0;
	ps->n = 100;
	for ( i = 0; i < 5; i++)
		ps->arr[i] = i;
	struct S* ptr = realloc(ps, 44);
	if (ptr != NULL)
		ps = ptr;
	for (i = 5; i < 10; i++)
		ps->arr[i] = i*i;
	for (i = 0; i < 10; i++)
		printf("%d  ", ps->arr[i]);
	printf("\n");
	free(ps);
	ps = NULL;
}
void 用指针实现柔性数组()
{
	struct S2 *ps1 = (struct S2*)malloc(sizeof(struct S2));
	ps1->arr = malloc(5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 5; i++)
		ps1->arr[i] = i;
	for (i = 0; i <5; i++)
		printf("%d  ", ps1->arr[i]);
	int* ptr = realloc(ps1, 44);
	if (ptr != NULL)
		ps1= ptr;              //
	for (i = 5; i < 10; i++)
		ps1->arr[i] = i * i;
	for (i = 0; i < 10; i++)
		printf("%d  ", ps1->arr[i]);
	free(ps1);
	ps1 = NULL; 
	printf("\n");
}
int main()
{

	柔性数组的使用();
	用指针实现柔性数组();
//第二种 优点
/*
* 1
	内存碎片更少 内存连续时访问更快
	局部性原理  rigister-cache-neicun]
* 2
	不易出错
*/
	return 0;
}