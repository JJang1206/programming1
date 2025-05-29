/* 파일명: assign07.c
 * 내용: 07. 커피 사이즈(S, T, G)와 주문 수량을 입력받아서 출력하는 프로그램.
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
    char size;
    int num;

    printf("커피 사이즈(S,T,G)와 주문 수량? ");
    scanf(" %c %d", &size, &num);

    printf("%c 사이즈 %d잔을 주문합니다.", size, num);
}