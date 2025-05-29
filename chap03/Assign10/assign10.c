/* 파일명: assign10.c
 * 내용: 달러와 환율을 입력받아 몇 원인지 출력하는 프로그램
 * 작성자: 장준석
 * 날짜: 2025.4.5
 * 버전: v1.0
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
    printf("원/달러 환율? ");
    scanf("%lf", &er);
    krw = usd * er;
    printf("USD %.2f = KRW %.2f", usd, krw);
}