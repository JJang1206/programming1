/* ���ϸ�: assign06.c
 * ����: ����Ʈ�� ������ �������ͷ� �Է¹޾� ������ ����ϴ� ���α׷�
 * �ۼ���: ���ؼ�
 * ��¥: 2025.4.5
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define P 0.3025

void Print();

int main()
{
    Print();
    return 0;
}

void Print()
{
    float m2, py;
    printf("����Ʈ�� ����(��������)? ");
    scanf("%f", &m2);
    py = m2 * P;
    printf("%.2f �������� = %.2f ��", m2, py);
}