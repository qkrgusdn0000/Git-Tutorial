#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void)
{
	double kilometers;
	double miles;
	printf("���ϰ��� �ϴ� km�� �Է��ϼ���, �� ������� �Ҽ��� ù��¥������ ��Ÿ���ϴ�.");
	scanf("%lf", &kilometers);
	miles = kilometers / 1.609;
	printf("%.1f km�� %.1f miles�� �����ϴ�.", kilometers, miles);
	return 0;
}
