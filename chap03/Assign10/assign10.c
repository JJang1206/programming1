/* ���ϸ�: assign10.c
 * ����: �޷��� ȯ���� �Է¹޾� �� ������ ����ϴ� ���α׷�
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
    double usd, er, krw;
    printf("USD? ");
    scanf("%lf", &usd);
    printf("��/�޷� ȯ��? ");
    scanf("%lf", &er);
    krw = usd * er;
    printf("USD %.2f = KRW %.2f", usd, krw);
}