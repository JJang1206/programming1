/* ���ϸ�: assign04.c
 * ����: ��ü�� �ۿ��� ���� �̵��Ÿ��� �Է¹޾� �� ���� ���� ���ϴ� ���α׷�
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
    float n, m, j;
    printf("��(N)? ");
    scanf("%f", &n);
    printf("�̵��Ÿ�(m)? ");
    scanf("%f", &m);
    j = n * m;
    printf("���� ��: %.2f J", j);
}