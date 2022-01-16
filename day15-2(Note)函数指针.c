#include<stdio.h>
typedef void(*pfun_t)(int);
void(*Signal(int, void(*)(int)))(int);
pfun_t Signal(int, pfun_t);
int ADD(int x, int y)
{
	int z = 0;
	z = x + y;
	return x + y;
}
void Print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	int a = 10, b = 20; int arr[10] = { 0 }; int(*p1)[10] = &arr;
//函数指针定义---指向函数的指针，存放函数地址的指针。
	int (*pa)(int, int) = ADD;
	void (*p)(char*) = Print;
	printf("ADD=%p   &ADD=%p   pa=%p\n", ADD, &ADD,pa);
	printf(" (*pa)(2, 3) = %d\n", (*pa)(2, 3));
	(*p)("hello");
	{
//一些折磨人的东西
	/* 1  (*(void(*)())0)()   把0强制类型转化 成函数指针类型。0就是一个函数的地址了。
	*                          然后再将地址0解引用，即调用0地址处的函数。
	* 
	*  2  void(*signal(int,void(*)(int)))(int)
	*      ==void(*函数指针) (int)  返回类型是函数指针
	*      ==void(*signal_参数_)(int)   参数有两个，int，和一个函数指针类型，返回类型是函数指针。
	*  可以简化，见3-4行。
	*/	   
	}
	return 0;
}