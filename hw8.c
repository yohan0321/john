#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

float a(float numbers[]);

int main()
{
    float numbers[5];
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; ++i)
        scanf("%f", &numbers[i]);

    printf("입력한 실수들의 표준편차: %f\n", a(numbers));
    return 0;
}

float a(float numbers[]) 
{
    float sum = 0.0, mean, SD = 0.0;
    int i;
    for (i = 0; i < 5; ++i) {
        sum += numbers[i];
    }
    mean = sum / 5;
    for (i = 0; i < 5; ++i)
        SD += pow(numbers[i] - mean, 2);
    return sqrt(SD / 5);
}
