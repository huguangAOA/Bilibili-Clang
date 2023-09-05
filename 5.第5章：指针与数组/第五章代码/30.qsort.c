/*************************************************************************
	> File Name: 30.qsort.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *getRandData(int n) {
    int *arr = (int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) arr[i] = rand() % 100;
    return arr;
}

void output(int *arr, int n) {
    int len = 0;
    // line 1 
    for (int i = 0; i < n; i++) {
        len += printf("%3d", i);
    }
    printf("\n");
    // line 2
    for (int i = 0; i < len; i++) printf("-");
    printf("\n");
    // line 3
    for (int i = 0; i < n; i++) {
        printf("%3d", arr[i]);
    }
    printf("\n\n");
    return ;
}

int comp(const void *p1, const void *p2) {
    const int *a = (const int *)p1;
    const int *b = (const int *)p2;
    if (*a > *b) return -1;
    if (*a == *b) return 0;
    return 1;
}

int comp2(const void *p1, const void *p2) {
    return *((const int *)p1) - *((const int *)p2);
}

int comp3(const void *p1, const void *p2) {
    return *((const int *)p2) - *((const int *)p1);
}

int main() {
    srand(time(0));
    int *arr = getRandData(10);
    output(arr, 10);
    printf("use comp : \n");
    qsort(arr, 10, sizeof(int), comp);
    output(arr, 10);
    printf("use comp2 : \n");
    qsort(arr, 10, sizeof(int), comp2);
    output(arr, 10);
    printf("use comp3 : \n");
    qsort(arr, 10, sizeof(int), comp3);
    output(arr, 10);
    return 0;
}
