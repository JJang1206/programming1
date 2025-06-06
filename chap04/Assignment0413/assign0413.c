/* 파일명: assign0413.c

 * 내용: PA13. 점 A의 좌표(x1, y1)과 점 B의 좌표(x2, y2)를 입력받아 두 점 A, B를 지나는 직선의 기울기를 구하는 프로그램을 작성하라

 * 작성자: 김영재

 * 날짜: 2025.04.18

 * 버전: v1.0
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

void Print(void);

int main()
{
	Print();
	return 0;
}

void Print(void)
{
	double x1, x2, y1, y2;

	printf("직선의 시작점 (x1, y1)? ");
	scanf("%lf %lf", &x1, &y1);
	printf("직선의 끝점 (x2, y2)? ");
	scanf("%lf %lf", &x2, &y2);

	double length = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2) * (y1 - y2)));

	printf("직선의 길이: %.06lf", length);

	return;
}