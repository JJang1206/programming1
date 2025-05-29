/* 파일명: assign09.c
 * 내용: 09. 16진수 정수를 입력받아 10진수로 출력하는 프로그램.
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
    int num;

    printf("16진수 정수? ");
    scanf("%x", &num);

    printf("16진수 %X는 10진수로 %d입니다.", num, num);
}