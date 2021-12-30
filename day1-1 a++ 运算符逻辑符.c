#include<stdio.h>
#include<stdlib.h>
void main()
//    ++a与a++的区别  
    //++a 先加后计算，a++ 先计算后加。
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
	
//复合赋值运算
	int s = 3;
		R =  s += s -= s * s;
// 运算关系符和逻辑运算符
	 /*
	 1，以 非0 为真， 0为假；  
	 2，和的优先级比或高
                 3, ++a 先加后计算，a++ 先计算后加
}
