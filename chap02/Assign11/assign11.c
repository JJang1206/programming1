/* 파일명: assign11.c
 * 내용: 11. 원주율 파이 값이 3.14159265라고 할 때, 파이 값을 여러 가지 방법으로 출력하는 프로그램 작성.
 * 소수점 이하 2자리까지, 소수점 이하 4자리까지, 소수점 이하 6자리까지, 소수점 이하 8자리까지 각각 출력,
 * 지수 표기로도 출력.
 * 작성자: 장준석
 * 날짜: 2025.3.31
 * 버전: v1.0
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
    double num = 3.14159265;

    printf("pi = %.2f\n", num);

    printf("pi = %.4f\n", num);

    printf("pi = %.6f\n", num);

    printf("pi = %.8f\n", num);

    printf("pi = %e\n", num);
}