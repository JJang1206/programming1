/* 파일명: assign03.c
 * 내용: 질량과 높이를 입력받아 위치 에너지를 구하는 프로그램
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
    float m, h, e;
    printf("질량(kg)? ");
    scanf("%f", &m);
    printf("높이(m)? ");
    scanf("%f", &h);
    e = 9.8f * m * h;
    printf("위치에너지: %.6f J", e);
}