#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a, b;
	printf("�� ������ �Է��ϼ���: ");
	scanf_s("%d %d", &a, &b);
	
	if (a > b)
	{
		printf("ū ���� �������� ���� ����:%d ������: %d", a / b, a % b);
	}
	else if (b > a)
	{
		printf("ū ���� �������� ���� ����:%d ������: %d", b / a, b % a);
	}
	
}