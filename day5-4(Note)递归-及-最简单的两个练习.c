#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//________________________________________________________________________
/*
  �ݹ� recursion     
 �㣬 1.����������� 2.���»�С  
 һ��    
  �ڴ���Ϊ ջ��  { �ֲ������������β� }       �κ�һ�εĺ������ã�����Ҫ��ջ������ռ䡣��������>  Stack overflow ջ���	
                                                                                                   //int main(){printf("hehe");main();return 0;}
             ����  { ��̬���ٵ��ڴ棬malloc��calloc }
             ��̬��{ ȫ�ֱ����� static���εı��� }
�����ݹ�ı�Ҫ����
1.������������������������ʱ���ݹ鲻�ټ���
2.ÿ�εݹ��Խ��Խ�ӽ����������                                      OHHhhhhhh ���ޡ�
*/
//______________________________________________________________________________
//��ϰ1 ���ִ�ӡһ����
void printbyNum(int n)
{
    if (n > 9)             //��Ҫ��������
    {
        printbyNum(n/10);  //������ɺ�ȥ�����е���һ�С�
    }
    printf("%d ",n%10);
}
// ��ϰ2 ���ַ����ĳ���
int my_strlen(char* str)  //���ڵ��ǵ�һ���ĵ�ַ��
{
    int count = 0;
    while(*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}
// ��ϰ3��������ʱ�������ַ�������*******************************
int My_Strlen(char* str)  //���ڵ��ǵ�һ���ĵ�ַ��
{
    if (*str != '\0')                                    //��Ҫ����һ
    {
        return 1 + My_Strlen(str + 1);      //����2���ַ���Խ��Խ�̡�
     }
    else
        return 0;
}
int main()
{
    unsigned int a = 0; int len;
    char arr[] = "bit";
    {
        scanf("%d", &a);
        printbyNum(a);
        printf("\n");
    }
    {
        len = my_strlen(arr);
        printf("len = %d\n", len);
    }
    {
        len = My_Strlen(arr);
        printf("len = %d\n", len);
    }
   
        return 0;
}