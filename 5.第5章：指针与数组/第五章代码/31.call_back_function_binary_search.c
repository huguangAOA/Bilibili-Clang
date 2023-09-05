/*************************************************************************
	> File Name: 31.call_back_function_binary_search.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>
#include <math.h>

typedef double (*FUNC_T)(double);

double f1(double x) {
    return x * x;
}

double f2(double x) {
    return 3 * x * x + 3 * x - 5;
}

double f3(double x) {
    return pow(1.2, x);
}

double binary_search(FUNC_T func, double y) {
    double l = 0, r = 1000, mid;
    while (r - l > 0.0000001) {
        mid = (l + r) / 2.0;
        if (func(mid) < y) l = mid;
        else r = mid;
    }
    return l;
}

int main() {
    double y;
    while (scanf("%lf", &y) != EOF) {
        double x1 = binary_search(f1, y);
        double x2 = binary_search(f2, y);
        double x3 = binary_search(f3, y);
        printf("x1 = %lf, f1(%lf) = %lf\n", x1, x1, f1(x1));
        printf("x2 = %lf, f2(%lf) = %lf\n", x2, x2, f2(x2));
        printf("x3 = %lf, f3(%lf) = %lf\n", x3, x3, f3(x3));
    }
    return 0;
}
