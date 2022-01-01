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
	switch(day)  //只能是整形变量， 无分号
	{
	case 1:      //冒号， 表达式得是常量
		printf("Monday");
		break;   //每个case要加break；        
	}
	switch (day)
	{
	case 1:      //只要满足就进行下一行； 可以不用加break；
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
		printf(" input error\n");  //需要default；
		break;
	}
	return 0;
}