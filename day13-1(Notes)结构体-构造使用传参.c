#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//�ṹ����
struct Stu //(�ؼ���_��ǩ)
{
	char name[20];
	short age;
	char tele[12];
	char sex[5];
};   //�ṹ���ȫ�ֱ������������ã�             //������зֺ�
typedef struct Student  
{
	char name[20];     //��һ��������ʽ
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
	struct qwq A;           //�ṹ����Ի���Ƕ��
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
	/*  ջ����                         ������                                  ��̬��
	  �ֲ����� �����βΣ���������    ��̬�ڴ����malloc free realloc calloc  ȫ�ֱ�������̬����
	 */
	struct Stu Tom ={ "Tom", 12, "13579478478", "boy" };;    //�ֲ�����
	Student QWQ ={"QWQ",11,"12345233233","boy"};
	struct HAHa Jerry = { NULL,{2,3.14},"hello" };    //Ƕ�׳�ʼ��
//���
	printf("%f\n", Jerry.A.b);
//����
	print1(QWQ);
	print2(&QWQ);   //�������  ����ַ��Ч����.    
	return 0;
}