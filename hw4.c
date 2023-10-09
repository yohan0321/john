#define _CRT_SECURE_NO_WARNINGES
#include<stdio.h>

int main(void)
{
	int num, i=2;
	printf("Please enter a number: ");
	scanf_s("%d", &num);
	while (1)
	{
		if (num == 2)
		{
			printf("It is a prime number.");
			break;
		}
		if (num % i == 0)
		{
			printf("It is not a prime number");
			break;
		}
		i++;
		if (num == i)
		{
			printf("It is a prime number.");
			break;
		}
	}
	return 0;
}