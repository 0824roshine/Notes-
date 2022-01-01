#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 1,m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;   //没有break就执行下一行！！！！包括下面的default！！！！！！
	case 3:
		switch(n)
		{
		case 1: n++;
		case 2:m++; n++; break;
		}
	case 4: m++; break;
	default: break;     //最好写最下面，什么位置都行
	}
	printf("m =% d, n = %d \n",m, n);
	return 0;

}