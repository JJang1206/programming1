/* ���ϸ�: assign05.c
 * ����: 05. �����Ը� �Է¹޾Ƽ� ����ϴ� ���α׷��� �ۼ�. �����Դ� �Ǽ�, �Ҽ��� ���� 2�ڸ����� ���.
 * �ۼ���: ���ؼ�
 * ��¥: 2025.3.31
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void Print();

int main()
{
	Print();
	return 0;
}

void Print()
{
	float num;
	printf("������? ");
	scanf("%f", &num);

	printf("�Է��� �����Դ� %.2fKG�Դϴ�.", num);
}