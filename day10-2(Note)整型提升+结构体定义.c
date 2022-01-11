#include<Stdio.h>
struct Student
{
	//成员变量
	char name[20];
	int age;
	char id[20];
};
void 整型提升()       //1.cpu计算整形更快且精度更高
{
	char a = 3; char b = 127;   // 先补全为32位，再相加，再截断为8位，有2次隐式转换
	char c = a + b;
	char p = 1;
	char A = 0xb6;
	short B = 0xb600;
	int C = 0xb6000000;
	if (A == 0xb6)
		printf("A");	
	if (B == 0xb600)
		printf("B");	
	if (C == 0xb6000000)
		printf("C\n");
	printf("%d\n", c);    //前面补1成为补码，然后求得原码。 
	printf("%u\n", sizeof(p));
	printf("%u\n", sizeof(+p));
	printf("%u\n", sizeof(!p));

}
int main()
{
	struct Student Dio = { "Mike",33,"114514" };   // 初始化
	struct Student* ps = &Dio;
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	整型提升();
//        结构体指针  成员变量
}

