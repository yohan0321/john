#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 7, 8,9, 10, 11, 12 };
	int* ptr1 = arr1;
	int* ptr2 = arr2;
	int* temp[6];
	int i;

	printf("arr1: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\narr2: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);

	for (i = 0; i < 6; i++)
		*(temp + i) = *(ptr2 + i);
	for (i = 0; i < 6; i++)
		*(ptr2 + i) = *(ptr1 + i);
	for (i = 0; i < 6; i++)
		*(ptr1 + i) = *(temp + i);

	printf("\nafter swap\n");
	printf("arr1: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr1[i]);
	printf("\narr2: ");
	for (i = 0; i < 6; i++)
		printf("%d ", arr2[i]);
	return 0;
}
