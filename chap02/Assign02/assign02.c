/* 파일명: assign02.c
 * 내용: 02. 학생의 번호와 학점을 입력받아 출력하는 프로그램 작성. 번호는 정수, 학점은 실수.
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
	float num2;
	printf("번호? ");
	scanf("%d", &num);

	printf("학점? ");
	scanf("%f", &num2);

	printf("%d번 학생의 학점은 %.6f입니다.", num, num2);
}