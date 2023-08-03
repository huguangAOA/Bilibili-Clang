/*************************************************************************
	> File Name: 15.HZOJ-466.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int is_palindrome(int x) {
    int z = x, y = 0;
    while (x) {
        y = y * 10 + x % 10;
        x /= 10;
    }
    return y == z;
}

int main() {
    int n, ans = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        ans += is_palindrome(i);
    }
    printf("%d\n", ans);
    return 0;
}
