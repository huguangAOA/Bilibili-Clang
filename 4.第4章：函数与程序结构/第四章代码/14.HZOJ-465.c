/*************************************************************************
	> File Name: 14.HZOJ-465.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int digit(long long n, long long k) {
    if (k == 1) return n % 10;
    return digit(n / 10, k - 1);
}

int main() {
    long long n, k;
    scanf("%lld%lld", &n, &k);
    printf("%d\n", digit(n, k));
    return 0;
}
