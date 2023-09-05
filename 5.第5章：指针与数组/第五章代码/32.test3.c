/*************************************************************************
	> File Name: 32.test3.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include<stdio.h>

typedef double (*FUNC_T)(double);

double min(double a, double b) {
    return a < b ? a : b;
}

double f(double x) {
    double y = 0;
    y += min(x, 3000) * 0.03;
    if (x > 3000) y += (min(x, 12000) - 3000) * 0.1;
    if (x > 12000) y += (min(x, 25000) - 12000) * 0.2;
    if (x > 25000) y += (min(x, 35000) - 25000) * 0.25;
    if (x > 35000) y += (min(x, 55000) - 35000) * 0.3;
    if (x > 55000) y += (min(x, 80000) - 55000) * 0.35;
    if (x > 80000) y += (x - 80000) * 0.45;
    return x - y;
}

double binary_search(FUNC_T func, double y) {
    double l = 0, r = 2 * y, mid;
    while (r - l > 1e-6) {
        mid = (l + r) / 2.0;
        if (func(mid) < y) l = mid;
        else r = mid;
    }
    return l;
}

int main() {
    double y;
    while (scanf("%lf", &y) != EOF) {
        printf("f(%.2lf) = %lf\n", binary_search(f, y), y);
    }
    return 0;
}
