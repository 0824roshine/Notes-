#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
// char*  strtok  = (char* str ,const char *sep
/*

*/
void 笨strtok()
{
	char arr[] = "roshine@buaa.edu.cn";
	char* p = "@.";
	char buf[1024] = { 0 };
	strcpy(buf, arr);
	char* ret = strtok(arr, p);
	printf("%s  ", ret);
	ret = strtok(NULL, p);
	printf("%s  ", ret);
	ret = strtok(NULL, p);
	printf("%s  ", ret);
	ret = strtok(NULL, p);
	printf("%s  ", ret);
}
void strtok正确用法() //strtok内部有静态变量！
{
	char arr[] = "roshine@buaa.edu.cn";
	char* p = "@.";
	char arr1[] = "192.168.31.121";
	char* p1= ".";
	for (char* ret1 = strtok(arr, p); ret1 != NULL; ret1 = strtok(NULL, p))
		printf("%s ", ret1);
	printf("\n");
	for (char* ret2 = strtok(arr1, p1); ret2 != NULL; ret2 = strtok(NULL, p))
		printf("%s ", ret2);
}
int main()
{
	strtok正确用法();
	return 0;
}