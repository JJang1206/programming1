/* ���ϸ�: assign07.c
 * ����: �Ǽ����� �Է¹޾� �� ���� ������ �������� ����ϴ� ���α׷�
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
    double s, z, zz;
    printf("�Ǽ�? ");
    scanf("%lf", &s);
    z = s * s;
    zz = s * s * s;
    printf("����: %e\n������: %e", z, zz);
}