#include<stdio.h>
#include<stdlib.h>
//
void main()
{
// 1.����
	int a = 0;//   *********����������ʹ��ʱ�������ʼ��������*****************
	int Age = 22��// ��ֵ�� //  ��˹��������  ������߷�������
    int palyCodeEveryday = 10��//�շ�������  ��������
	printf("%p", &a); //���λ��
	printf("heiheihei"); //��Ҫ��stdio.h

// 2.��VSд ������� define
	     /*  A.��ͷ�ļ����½���----ͷ�ļ�,   wlx.h 
		     |                                                    |
		     |#include<stdio.h>        #include"wlx.h"            |
			 |#include<stdlib.h>       ����ֵ ������()            |
			 |#include<Windows.h>         {                       |
			 |#define ����ֵ void             printf("û�Ա�")��  |
			 |#define ������ main             system("pause");    | 
			 |                                                    |
			 |#define N 10                    printf("%d", N);    |
	        define ������ �������
	       �滻�ؼ��֣�����һ�ּ��ܡ�
		   ����һ��������
		 */  
// 3.ϵͳ���

	system("tasklist"); //   �򿪽����б�
	system("taskkill /f /im QQProtect.exe");
	system("shutdown -s -t 6000"); //6000s��ػ�
	system("shutdown -a"); //ȡ���ػ�
	system("calc");//�򿪼�����
	system("pause");
	//getchar() �� io��; 
	//Ҳ������ͣ���� system��"pause"���� lib �
}