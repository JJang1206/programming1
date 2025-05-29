/* 파일명: assign02.c
 * 내용: 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램 (정수형 변수 사용, printf 문은 1회만 사용)
 * 작성자: 장준석
 * 날짜: 2025.4.5
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
    int w, h, s, c;
    printf("가로의 길이 ? ");
    scanf("%d", &w);
    printf("세로의 길이 ? ");
    scanf("%d", &h);
    s = w * h;
    c = 2 * (w + h);
    printf("직사각형의 넓이: %d\n직사각형의 둘레: %d", s, c);
}