#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLINE 1000

int my_getline(char* line, int max);

int main() {
    char line[MAXLINE];
    int c, reverse = 0, start = -1, end = -1, found = 0;

    while ((c = getchar()) != EOF && c != '\n') {
        if (c == '-'){
            while ((c = getchar()) != EOF && c != ' ') { // 옵션 읽기
                switch (c) {
                case 'r': 
                    reverse = 1;
                    break;
                default:
                    printf("find: illegal option %c\n", c);
                    return -1;
                }
            }
        }
        else {
            printf("Usage: find -r start end\n");
            return -1;
        }
    }

    if (reverse && (start == -1 || end == -1)) {
        printf("Usage: find -r start end\n");
        return -1;
    }
