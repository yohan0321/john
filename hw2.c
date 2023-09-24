#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double num, result;
	printf("Please enter kilometers: ");
	scanf("%lf", &num);
	result = num / 1.609;
	printf("%.1f", result);
}