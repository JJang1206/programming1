/* 파일명: assign07.c
 * 내용: 실수값을 입력받아 그 값의 제곱과 세제곱을 출력하는 프로그램
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
    double s, z, zz;
    printf("실수? ");
    scanf("%lf", &s);
    z = s * s;
    zz = s * s * s;
    printf("제곱: %e\n세제곱: %e", z, zz);
}