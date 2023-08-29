/*************************************************************************
	> File Name: 20.funtion_with_pointer.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

void add_once(int *p) {
    *p += 1;
    return ;
}

void f(int n, int *sum_addr) {
    *sum_addr = (1 + n) * n / 2;
    return ;
}

void output(int *p, int n) {
    for (int i = 0; i < n; i++) {
        printf("p[%d] = %d\n", i, p[i]);
    }
    return ;
}

int main() {
    int a = 123;
    printf("a = %d\n", a);
    add_once(&a);
    printf("a = %d\n", a);
    int n = 10, sum;
    f(n, &sum);
    printf("sum = %d\n", sum);
    int arr[10] = {9, 8, 5, 3, 6, 2, 1, 0, 4, 7};
    output(arr, 10);
    return 0;
}
