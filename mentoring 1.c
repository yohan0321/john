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
            while ((c = getchar()) != EOF && c != ' ') { // �ɼ� �б�
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
        else if (isdigit(c)) { 
            ungetc(c, stdin);
            scanf_s("%d %d", &start, &end);
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
