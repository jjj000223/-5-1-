#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a, b;
	printf("두 정수를 입력하세요: ");
	scanf_s("%d %d", &a, &b);
	
	if (a > b)
	{
		printf("큰 수를 작은수로 나눈 몫은:%d 나머지: %d", a / b, a % b);
	}
	else if (b > a)
	{
		printf("큰 수를 작은수로 나눈 몫은:%d 나머지: %d", b / a, b % a);
	}
	
}