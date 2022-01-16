#include<stdio.h>
char* my_strcpy(char* dest, const char* scr);
int add(int x, int y)
{
	int z = x + y;
	return z;
}
}int sub(int x, int y)
{
	int z = x - y;
	return z;
}
}int mul(int x, int y)
{
	int z = x * y;
	return z;
}
}int devide(int x, int y)
{
	int z = x / y;
	return z;
}
int main()
{
                char(*pa1)(char*, const char*);
	char(*parr[4])(char*, const char*);
	int (*p_f_arr[4])(int x, int y) = { add,sub,mul,devide };
	for (int i = 0; i < 4; i++)
	{
		printf("%d ", (*p_f_arr[i])(24, 8));
	}
	return 0;
}