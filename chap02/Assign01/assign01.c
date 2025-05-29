/* 파일명: assign01.c
 * 내용: 01. 다음과 같이 출력하는 프로그램을 작성, 단, printf 문은 한번만 작성.
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
	printf(
		"int main(void)\n{\n    return 0;\n}"
	);
}