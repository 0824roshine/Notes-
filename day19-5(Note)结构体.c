#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
struct Stu
{
	char name[15];
	char tele[12];
	char sex[6];
	int age;
} s3, s4;     //ȫ�ֱ���
struct Stu S3; //ȫ�ֱ���
//�����ṹ�壬ֻ�ܴ���ȫ�ֱ�����
struct    
{
	int a;
	char b;
}x;
struct    //�����ṹ��ָ��
{                              //�������������߲�һ����
	int a;
	char b;
}*px;
typedef struct Node // �����õĴ�������
{
	int data;
	struct Node* next;
}Node;
void �ṹ���ڴ�������()
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
//ԭ��1.��������Ӳ��ƽ̨���ܷ��������ַ�ϵ��������ݵġ�
        //ĳЩӲ��ƽֻ̨����ĳЩ��ַ��ȡĳЩ�ض����͵����ݣ�����Ӳ���쳣
//      2.�ռ任ʱ�䣬���ݽṹ(������ջ)Ӧ�þ���������Ȼ�߽��϶��䣬ԭ�����ڣ�Ϊ����
//          δ������ڴ棬��������Ҫ�������ڴ���ʣ��������ֻ��Ҫһ�Ρ�
void ����Ĭ�϶�����()
{
#pragma pack(4) //���ö�����
	struct s_save_room
	{
		char c5;
		double d5;
	};
#pragma pack();  //ȡ��������
}
int main()
{
	struct Stu S1;
	struct Stu S2;
	struct Node n1;
	Node N2;
	�ṹ���ڴ�������();
	return 0;
}