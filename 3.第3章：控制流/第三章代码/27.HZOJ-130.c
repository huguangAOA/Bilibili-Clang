/*************************************************************************
	> File Name: 27.HZOJ-130.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    int m, n;
    double yu = 0;
    scanf("%d%d", &m, &n);
    for (int i = 0; i < n; i++) {
        yu += m;
        yu *= 1.00417;
    }
    printf("$%.2lf\n", yu);
    return 0;
}
