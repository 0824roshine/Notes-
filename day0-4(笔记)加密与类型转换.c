#include<stdio.h>
#include<stdlib.h>
//����
void main1()
{
	//������ĸ�������
	char ch = getchar();
	if (ch <= 'F')
	{
		ch = ch - 17;
	}
	putchar(ch);
	system("pause");

}
void main2()
{
	char ch[10] = { 'c','a','l','c' };
	system(ch);
	for (int i = 0; i < 4; i++)
	{
		ch[i] = ch[i] - 30;
	}
	printf("%s", ch);
	system("pause");
}
//��ʽ��ǿ�ƣ�����ת����
void main()
{
//  ��ʽ
	int a = 1;// 4�ֽ�
	double b = 0.2;  // 8�ֽ�
	printf("%f\n", a + b);
	printf("%f\n", 10 + b + 'a' + 'b' * 0.0001);
// ǿ��   ��תС
  //1. double תint��
	double c = 3.14;
	printf("%d\n", (int)c);   //����Ҳ�����ñ��ʽ
	   //system("pause");
	int f = c;
	printf("%d\n", f);
	   //system("pause");
  //2.char ת int
	char g = 'a';
	int h = g;
	printf("%d\n", h);
	double k = 10.000+20.92+10.1+11;
	printf("%.3f", k);
	system("pause");



}
