#include<Stdio.h>
struct Student
{
	//��Ա����
	char name[20];
	int age;
	char id[20];
};
void ��������()       //1.cpu�������θ����Ҿ��ȸ���
{
	char a = 3; char b = 127;   // �Ȳ�ȫΪ32λ������ӣ��ٽض�Ϊ8λ����2����ʽת��
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
	printf("%d\n", c);    //ǰ�油1��Ϊ���룬Ȼ�����ԭ�롣 
	printf("%u\n", sizeof(p));
	printf("%u\n", sizeof(+p));
	printf("%u\n", sizeof(!p));

}
int main()
{
	struct Student Dio = { "Mike",33,"114514" };   // ��ʼ��
	struct Student* ps = &Dio;
	printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	��������();
//        �ṹ��ָ��  ��Ա����
}

