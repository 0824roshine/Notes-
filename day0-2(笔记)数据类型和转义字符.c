#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<limits.h>
//ת���ַ�   ���� 8-16-32-64
void main()
{
	int a = 0;
	while (a < 3)
	{
		printf("\n");
		Sleep(100);//��ms
		printf("ת��");
		a++;
		Sleep(50);
		printf("\t");
		printf("�ַ�");
	}
	printf("%d\n", 0x12); // 16����
	printf("%d\n", 012);  // 8����
//32λ 64 λ�����������*****λ�����������Ѱַ����
	printf("%p\n", &a);
	/*32λ��������ڴ��ַ��8λ�����Ѱַ������4G
	  64λ������Ѱַ���������޵�
	*/

//��������**********
	printf("%f\n", (float)a); 
	/*1.��ƥ��ʱ������ǿ�иı�
	  2.����һ��ƥ���Ӧ
	  3.�������͵����ã�
	     a.������ʽ     
		 b.����   
		      ������ַ����֪����ͷ�����ǽ�β�������������㣬
			  ������ͷ���ƶ���λ��int 4����double 8����char 1��
			  char 8λ  short[int] 16λ-----long[int] 32λ----float 32λ
			  char���з���-128~127���޷��� 0~256
	*/
	int a1 = 10u; //(�޷���������)
	int a2 = 10l;//(long[int] ������)
	int a3 = 10ll;//(long long )
	int b1 = 1;
	short int b2 = 2;
	long int b3 = 3;
	printf("%d ,%d ,%d\n", sizeof(int), sizeof(short int), sizeof(long int));
	short int amax = SHRT_MAX;
	short int amin = SHRT_MIN;
	unsigned short int bmax = USHRT_MAX;
	long int cmax = LONG_MAX;
	long int cmin = LONG_MIN;
	printf("%d ,%d ,%d ,%d ,%d\n",amax, amin, bmax,cmax, cmin);
// sizeof ��һ�������   ������������������
	system("pause");
}