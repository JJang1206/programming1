/* ���ϸ�: assign01.c
 * ����: �� ���� ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷�
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
    int l, s, c;
    printf("�� ���� ���� ? ");
    scanf("%d", &l);
    s = l * l;
    c = 4 * l;
    printf("���簢���� ����: %d\n���簢���� �ѷ�: %d", s, c);
}