/* ���ϸ�: assign02.c
 * ����: ������ ���̿� ������ ���̸� �Է¹޾� ���簢���� ���̿� �ѷ��� ���ϴ� ���α׷� (������ ���� ���, printf ���� 1ȸ�� ���)
 * �ۼ���: ���ؼ�
 * ��¥: 2025.4.5
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
    int w, h, s, c;
    printf("������ ���� ? ");
    scanf("%d", &w);
    printf("������ ���� ? ");
    scanf("%d", &h);
    s = w * h;
    c = 2 * (w + h);
    printf("���簢���� ����: %d\n���簢���� �ѷ�: %d", s, c);
}