/*************************************************************************
	> File Name: 6.f_function.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int f(int n) {
    printf("in f(%d)\n", n);
    int ret;
    if (n == 1) ret = 1;
    else ret = n * f(n - 1);
    printf("out f(%d)\n", n);
    return ret;
}

int main() {
    int n;
    while (~scanf("%d", &n)) {
        printf("f(%d) = %d\n", n, f(n));
    }
    return 0;
}
