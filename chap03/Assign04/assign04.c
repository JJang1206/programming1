/* 파일명: assign04.c
 * 내용: 물체에 작용한 힘과 이동거리를 입력받아 한 일의 양을 구하는 프로그램
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
    float n, m, j;
    printf("힘(N)? ");
    scanf("%f", &n);
    printf("이동거리(m)? ");
    scanf("%f", &m);
    j = n * m;
    printf("일의 양: %.2f J", j);
}