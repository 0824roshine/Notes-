#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 1,m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;   //û��break��ִ����һ�У����������������default������������
	case 3:
		switch(n)
		{
		case 1: n++;
		case 2:m++; n++; break;
		}
	case 4: m++; break;
	default: break;     //���д�����棬ʲôλ�ö���
	}
	printf("m =% d, n = %d \n",m, n);
	return 0;

}