#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
//do-whlie��ϰ    for��ϰ+ shellExcuteAָ�

     // while ����ִ�У����жϣ������棬�������
void main()
{
	int i = 0;
	do
	{
		printf("�Ա���%d��\n\n",i--);
	} while (i == 1);
	int j= 1;
	do
	{
		printf("�Ա���%d��\n\n", j--);
	} while (j == 1);
    // for ����ʼ��;�ж�;��������;)
	//��ʼ��ֻ��һ�Σ�����������ѭ�����֮����С�       shellExcuteAָ��
	for(int k = 0;k<= 3; k++)
	{
		ShellExecuteA(0, "open", "\"C:\\Program Files(x86)\\Tencent\\QQ\\Bin\\QQScLauncher.exe\"", 0, 0, 2);
		//0����ϵͳ�򿪣�open����ַ��ע���/��*,����Ĭ�ϵ�0�����һλ 0���ش򿪣�1��С����2������3���
	}
	system("pause");
}
