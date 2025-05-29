/* 파일명: assign01.c
 * 내용: 한 변의 길이를 입력받아 정사각형의 넓이와 둘레를 구하는 프로그램
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
    int l, s, c;
    printf("한 변의 길이 ? ");
    scanf("%d", &l);
    s = l * l;
    c = 4 * l;
    printf("정사각형의 넓이: %d\n정사각형의 둘레: %d", s, c);
}