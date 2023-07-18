/*************************************************************************
	> File Name: 14.break_continue.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", i + 1);
        if (i + 1 == 8) break;
    }
    printf("\n");
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) continue;
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}
