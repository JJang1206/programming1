/* ���ϸ�: assign02.c
 * ����: 02. �л��� ��ȣ�� ������ �Է¹޾� ����ϴ� ���α׷� �ۼ�. ��ȣ�� ����, ������ �Ǽ�.
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
	int num;
	float num2;
	printf("��ȣ? ");
	scanf("%d", &num);

	printf("����? ");
	scanf("%f", &num2);

	printf("%d�� �л��� ������ %.6f�Դϴ�.", num, num2);
}