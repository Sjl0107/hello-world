#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//main�����ǳ�������
//һ��������ֻ����һ��main����
int main() {
	
	//sizeof()����Ĵ�С ��λ���ֽ�
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