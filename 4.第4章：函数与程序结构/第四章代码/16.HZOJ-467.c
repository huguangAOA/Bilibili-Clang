/*************************************************************************
	> File Name: 16.HZOJ-467.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

long long f(int n) {
    if (n == 1) return 1;
    return n * f(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%lld\n", f(n));
    return 0;
}
