/* ���ϸ�: assign07.c
 * ����: 07. Ŀ�� ������(S, T, G)�� �ֹ� ������ �Է¹޾Ƽ� ����ϴ� ���α׷�.
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
    char size;
    int num;

    printf("Ŀ�� ������(S,T,G)�� �ֹ� ����? ");
    scanf(" %c %d", &size, &num);

    printf("%c ������ %d���� �ֹ��մϴ�.", size, num);
}