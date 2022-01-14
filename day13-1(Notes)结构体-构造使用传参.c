#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//结构声明
struct Stu //(关键字_标签)
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
};   //结构体的全局变量（不建议用）             //这里得有分号
typedef struct Student  
{
	char name[20];     //另一种声明方式
	short age;
	char tele[12];                  
	char sex[5];                 
}Student;
struct qwq
{
	int a;
	double b;
};
struct HAHa
{
	char* pa;
	struct qwq A;           //结构体可以互相嵌套
	char ch[10];
};
void print1(Student tmp)
{
	printf("%s  ", tmp.name);
	printf("%d  ", tmp.age);
	printf("%s  ", tmp.tele);
	printf("%s\n", tmp.sex);
}
void print2(Student* tmp1)
{
	printf("%s  ", tmp1->name);
	printf("%d  ", tmp1->age);
	printf("%s  ", tmp1->tele);
	printf("%s\n", tmp1->sex);
}
int main()
{
	/*  栈区，                         堆区，                                  静态区
	  局部变量 函数形参，函数调用    动态内存分配malloc free realloc calloc  全局变量，静态变量
	 */
	struct Stu Tom ={ "Tom", 12, "13579478478", "boy" };;    //局部变量
	Student QWQ ={"QWQ",11,"12345233233","boy"};
	struct HAHa Jerry = { NULL,{2,3.14},"hello" };    //嵌套初始化
//输出
	printf("%f\n", Jerry.A.b);
//访问
	print1(QWQ);
	print2(&QWQ);   //这个更好  传地址的效果好.    
	return 0;
}