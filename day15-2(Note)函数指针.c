#include<stdio.h>
typedef void(*pfun_t)(int);
void(*Signal(int, void(*)(int)))(int);
pfun_t Signal(int, pfun_t);
int ADD(int x, int y)
{
	int z = 0;
	z = x + y;
	return x + y;
}
void Print(char* str)
{
	printf("%s\n", str);
}
int main()
{
	int a = 10, b = 20; int arr[10] = { 0 }; int(*p1)[10] = &arr;
//����ָ�붨��---ָ������ָ�룬��ź�����ַ��ָ�롣
	int (*pa)(int, int) = ADD;
	void (*p)(char*) = Print;
	printf("ADD=%p   &ADD=%p   pa=%p\n", ADD, &ADD,pa);
	printf(" (*pa)(2, 3) = %d\n", (*pa)(2, 3));
	(*p)("hello");
	{
//һЩ��ĥ�˵Ķ���
	/* 1  (*(void(*)())0)()   ��0ǿ������ת�� �ɺ���ָ�����͡�0����һ�������ĵ�ַ�ˡ�
	*                          Ȼ���ٽ���ַ0�����ã�������0��ַ���ĺ�����
	* 
	*  2  void(*signal(int,void(*)(int)))(int)
	*      ==void(*����ָ��) (int)  ���������Ǻ���ָ��
	*      ==void(*signal_����_)(int)   ������������int����һ������ָ�����ͣ����������Ǻ���ָ�롣
	*  ���Լ򻯣���3-4�С�
	*/	   
	}
	return 0;
}