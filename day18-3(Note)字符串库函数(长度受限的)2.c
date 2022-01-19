#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[5] = "abc";
	char arr2[] = "IloveU";
	char arr3[10] = "abcdefghij";
	char arr4[20] = "wtf";
	char arr5[10] = "abcdpfghij";
	strncpy(arr1, arr2, 4);
	strncat(arr4, arr3, 9);
	int abc = strncmp(arr3, arr5, 3);
	printf("%s  %s  %d\n", arr1, arr4,abc);
	return 0;
}