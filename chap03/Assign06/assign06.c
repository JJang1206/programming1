/* 파일명: assign06.c
 * 내용: 아파트의 면적을 제곱미터로 입력받아 평으로 출력하는 프로그램
 * 작성자: 장준석
 * 날짜: 2025.4.5
 * 버전: v1.0
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
    printf("아파트의 면적(제곱미터)? ");
    scanf("%f", &m2);
    py = m2 * P;
    printf("%.2f 제곱미터 = %.2f 평", m2, py);
}