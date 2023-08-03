/*************************************************************************
	> File Name: 10.max_int.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>
#include <stdarg.h>
#include <inttypes.h>

int max_int(int n, ...) {
    va_list args;
    va_start(args, n);
    int ans = INT32_MIN;
    for (int i = 0; i < n; i++) {
        int a = va_arg(args, int);
        if (a > ans) ans = a;
    }
    va_end(args);
    return ans;
}

int main() {
    printf("max_int(3, 8, 7, 9) = %d\n", max_int(3, 8, 7, 9));
    printf("max_int(2, 8, 7, 9) = %d\n", max_int(2, 8, 7, 9));
    return 0;
}
