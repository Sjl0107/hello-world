#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//main函数是程序的入口
//一个工程中只能有一个main函数
int main() {
	
	//sizeof()计算的大小 单位是字节
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(long));//4/8 >=int
	printf("%d\n", sizeof(long long));//8  >=long
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	//int num = 0;
	//scanf("%d", &num);
	//printf("%d\n", num);
	
	//printf("hello world!\n");
	return 0;
}