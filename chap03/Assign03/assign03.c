/* ���ϸ�: assign03.c
 * ����: ������ ���̸� �Է¹޾� ��ġ �������� ���ϴ� ���α׷�
 * �ۼ���: ���ؼ�
 * ��¥: 2025.4.5
 * ����: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Print();

int main()
{
    Print();
    return 0;
}

void Print()
{
    float m, h, e;
    printf("����(kg)? ");
    scanf("%f", &m);
    printf("����(m)? ");
    scanf("%f", &h);
    e = 9.8f * m * h;
    printf("��ġ������: %.6f J", e);
}