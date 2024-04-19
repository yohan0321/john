#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXLINE 1000

int my_getline(char* line, int max);

int main() {
    char line[MAXLINE];
    int c, except = 0, number = 0, reverse = 0, start = -1, end = -1, found = 0;

    while ((c = getchar()) != EOF && c != '\n') {
        if (c == '-'){
            while ((c = getchar()) != EOF && c != ' ') { // 옵션 읽기
                switch (c) {
                case 'x': 
                    except = 1;
                    break;
                case 'n': 
                    number = 1; 
                    break;
                case 'r': 
                    reverse = 1;
                    break;
                default:
                    printf("find: illegal option %c\n", c);
                    return -1;
                }
            }
        }
        else if (isdigit(c)) { // 숫자 읽기
            ungetc(c, stdin);
            scanf_s("%d %d", &start, &end);
        }
        else {
            printf("Usage: find -x -n -r start end\n");
            return -1;
        }
    }

    if (reverse && (start == -1 || end == -1)) {
        printf("Usage: find -x -n -r start end\n");
        return -1;
    }


int my_getline(char* line, int max) {
    int c, i;
    for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}
