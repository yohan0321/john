#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void swap(double v[], int i, int j) {
    double temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}

void qsort(double v[], int left, int right, int (*comp)(const double*, const double*)) {
    if (left >= right)
        return;
    swap(v, left, (left + right) / 2);
    int last = left;
    for (int i = left + 1; i <= right; i++)
        if ((*comp)(&v[i], &v[left]) < 0)
            swap(v, ++last, i);
    swap(v, left, last);
    qsort(v, left, last - 1, comp);
    qsort(v, last + 1, right, comp);
}

int double_compare(const double* a, const double* b) {
    if (*a < *b) return -1;
    else if (*a > *b) return 1;
    else return 0;
}

int main() {
    double array[] = { 1.1, 9.9, 2.2, 8.8, 3.3, 7.7, 4.4, 6.6, 5.5, 0.0 };
    qsort(array, 0, SIZE - 1, double_compare);

    printf("Sorted array:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%.1f ", array[i]);
    }
    printf("\n");

    return 0;
}
