/*************************************************************************
	> File Name: 13.HZOJ-464.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int is_leap_year(int x) {
    if (x % 4 == 0 && x % 100 != 0) return 1;
    if (x % 400 == 0) return 1;
    return 0;
}

int main() {
    int x, y, ans = 0;
    scanf("%d%d", &x, &y);
    for (int i = x; i <= y; i++) {
        ans += is_leap_year(i);
    }
    printf("%d\n", ans);
    return 0;
}
