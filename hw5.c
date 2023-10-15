#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void f(int n) {
    if (n > 1) f(n / 2);
    printf("%d", n % 2);
}


int main() {
    int n;
    printf("Please enter a number: ");
    scanf("%d", &n);
    f(n);
}