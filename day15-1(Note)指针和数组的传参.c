#include<stdio.h>
int ADD(int x, int y)
{
	int z = 0;
	z = x + y;
	return x + y;
}
int main()
{
	int a = 10, b = 20; int arr[10] = { 0 };
	printf("%p   %p\n", ADD, &ADD);
	return 0;
}