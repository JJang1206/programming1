/* 파일명: assign05.c
 * 내용: 05. 몸무게를 입력받아서 출력하는 프로그램을 작성. 몸무게는 실수, 소수점 이하 2자리까지 출력.
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
	float num;
	printf("몸무게? ");
	scanf("%f", &num);

	printf("입력한 몸무게는 %.2fKG입니다.", num);
}