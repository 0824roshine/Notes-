#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int a;
	scanf_s("%d", &a);
	if (a%2)
		printf("No");
	else
		printf("Yes");
	for (int i = 0; i <=100; i++)
	{
		if ((i%2))
		printf("%d, ", i);
	}
	int day;
	scanf_s("%d", &day);
	switch(day)  //ֻ�������α����� �޷ֺ�
	{
	case 1:      //ð�ţ� ���ʽ���ǳ���
		printf("Monday");
		break;   //ÿ��caseҪ��break��        
	}
	switch (day)
	{
	case 1:      //ֻҪ����ͽ�����һ�У� ���Բ��ü�break��
	case 2:
	case 3:
	case 4:
	case 5:
		printf("workday\n");
		break;
	case 6:
	case 7:
		printf("restday\n");
		break;
	default:
		printf(" input error\n");  //��Ҫdefault��
		break;
	}
	return 0;
}