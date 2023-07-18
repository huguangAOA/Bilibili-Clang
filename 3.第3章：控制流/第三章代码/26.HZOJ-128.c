/*************************************************************************
	> File Name: 26.HZOJ-128.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    for (int i = 0, a; i < n; i++) {
        scanf("%d", &a);
        sum += a;
    }
    printf("%.2lf\n", 1.0 * sum / n);
    return 0;
}
