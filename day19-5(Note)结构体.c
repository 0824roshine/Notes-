#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
struct Stu
{
	char name[15];
	char tele[12];
	char sex[6];
	int age;
} s3, s4;     //全局变量
struct Stu S3; //全局变量
//匿名结构体，只能创建全局变量。
struct    
{
	int a;
	char b;
}x;
struct    //匿名结构体指针
{                              //编译器看来两者不一样。
	int a;
	char b;
}*px;
typedef struct Node // 自引用的创建规则
{
	int data;
	struct Node* next;
}Node;
void 结构体内存对齐规则()
{
	struct S11     
	{
 		char a1;    //a1b1--c1---   
		char b1;    //1 2 --5--8
		int c1;
	};
	struct S22
	{
		char a2;    //a2---b2---c2
		int b2;     //1----5----9--12
		char c2;
	};
	struct S33     //8+4+4
	{
		double a3;
		char b3;
		int c3;
	};
	struct S44     //1+7+(8+4+4)+8=32
	{
		char c1;
		struct S33 s3;
		double d;
	};
	struct S11 aa = { 0 };
	struct S22 ab = { 0 };
	struct S33 ac = { 0 };
	struct S44 ad = { 0 };
	printf("%d  %d  %d  %d\n", sizeof(aa), sizeof(ab), sizeof(ac), sizeof(ad));
}
//原因：1.不是所有硬件平台都能访问任意地址上的任意数据的。
        //某些硬件平台只能在某些地址处取某些特定类型的数据，否则硬件异常
//      2.空间换时间，数据结构(尤其是栈)应该尽可能在自然边界上对其，原因在于，为访问
//          未对齐的内存，处理器需要做两次内存访问，而对其的只需要一次。
void 设置默认对其数()
{
#pragma pack(4) //设置对齐数
	struct s_save_room
	{
		char c5;
		double d5;
	};
#pragma pack();  //取消对齐数
}
int main()
{
	struct Stu S1;
	struct Stu S2;
	struct Node n1;
	Node N2;
	结构体内存对齐规则();
	return 0;
}