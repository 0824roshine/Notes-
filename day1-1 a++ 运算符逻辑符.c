#include<stdio.h>
#include<stdlib.h>
void main()
//    ++a��a++������  
    //++a �ȼӺ���㣬a++ �ȼ����ӡ�
{
	int a = 3;
	int b = 5;
	int d1 = 6;
	int d2 = 6;
	int c1 = (a++) * b;
	int c2 = (++a) * b;
	printf("%d, %d,", c1,a);
	printf("\n%d,  %d  \n", d1++,++d2);
	int k1 = 10;
	int l1 = (k1++) + (++k1) * 3 + (--k1) + (k1++);
	int ka = 10;  int la = ka++ + ka++;
	int kb = 10;  int lb = kb++ + ++kb;
	
//���ϸ�ֵ����
	int s = 3;
		R =  s += s -= s * s;
// �����ϵ�����߼������
	 /*
	 1���� ��0 Ϊ�棬 0Ϊ�٣�  
	 2���͵����ȼ��Ȼ��
                 3, ++a �ȼӺ���㣬a++ �ȼ�����
}
