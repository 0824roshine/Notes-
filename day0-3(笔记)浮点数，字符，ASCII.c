#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
//������ ��ѧ������  *�ַ�_*  

void main()
{
// ������
	float a = 10.1f;   //float ��Чλ��     6��7λ
	double b = 10.0;   //Ĭ�� 15-16λ
	long double c = 10.00;
	printf("%d , %d\n ", sizeof(float), sizeof(double));
//��ѧ��������   1.23e3       1.333e+002

//�ַ����� �ַ����� �ַ������� 
	char d = 'a';  
	printf("%d ,%d\n",sizeof(d), sizeof('a'));

	/*a �Ǳ�����'a'�ǳ������ַ��������ַ������ĳ����ǲ�һ���ġ�     
	�ַ��������������ʱ��ü����ȡ�*/

	printf("%d ,%d ,%d\n", sizeof("a"), sizeof('a'), sizeof(""));
	
	//˫�������ַ���������������һ ""����һ�� \0.

	//���ַ���խ�ַ� �� �Ǻ��֣�ռ����
	wchar_t p = '��';
	printf("%d ,%d ,%d\n", sizeof("a"), sizeof("��"),sizeof(p));
//ASCII��
	//�ַ����ڴ��еı�����ʽ,
	int a1 = 1;
	char a2 = '1';
		printf("%d, %d\n", sizeof(a1), sizeof(a2));
	system("pause");
}

