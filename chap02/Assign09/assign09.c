/* ���ϸ�: assign09.c
 * ����: 09. 16���� ������ �Է¹޾� 10������ ����ϴ� ���α׷�.
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

    printf("16���� ����? ");
    scanf("%x", &num);

    printf("16���� %X�� 10������ %d�Դϴ�.", num, num);
}