#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//________________________________________________________________________
/*
  递归 recursion     
 零， 1.自身调用自身 2.大事化小  
 一，    
  内存会分为 栈区  { 局部变量，函数形参 }       任何一次的函数调用，都需要从栈区申请空间。————>  Stack overflow 栈溢出	
                                                                                                   //int main(){printf("hehe");main();return 0;}
             堆区  { 动态开辟的内存，malloc，calloc }
             静态区{ 全局变量， static修饰的变量 }
二、递归的必要条件
1.存在限制条件，当满足条件时，递归不再继续
2.每次递归后越来越接近这个条件。                                      OHHhhhhhh 极限。
*/
//______________________________________________________________________________
//练习1 逐字打印一个数
void printbyNum(int n)
{
    if (n > 9)             //需要满足条件
    {
        printbyNum(n/10);  //调用完成后，去调用行的下一行。
    }
    printf("%d ",n%10);
}
// 练习2 求字符串的长度
int my_strlen(char* str)  //存在的是第一个的地址；
{
    int count = 0;
    while(*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}
// 练习3：不用临时变量求字符串长度*******************************
int My_Strlen(char* str)  //存在的是第一个的地址；
{
    if (*str != '\0')                                    //必要条件一
    {
        return 1 + My_Strlen(str + 1);      //条件2，字符串越来越短。
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