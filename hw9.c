#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void convertCase(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        const int diff = 'a' - 'A';
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + diff;
        }
        else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - diff;
        }
        i++;
    }
}

int main() {
    char str1[100];

    printf("Input> ");
    gets(str1); 
    convertCase(str1);
    printf("Output> %s\n", str1);
    return 0;
}