/* ���ϸ�: assign11.c
 * ����: 11. ������ ���� ���� 3.14159265��� �� ��, ���� ���� ���� ���� ������� ����ϴ� ���α׷� �ۼ�.
 * �Ҽ��� ���� 2�ڸ�����, �Ҽ��� ���� 4�ڸ�����, �Ҽ��� ���� 6�ڸ�����, �Ҽ��� ���� 8�ڸ����� ���� ���,
 * ���� ǥ��ε� ���.
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
    double num = 3.14159265;

    printf("pi = %.2f\n", num);

    printf("pi = %.4f\n", num);

    printf("pi = %.6f\n", num);

    printf("pi = %.8f\n", num);

    printf("pi = %e\n", num);
}