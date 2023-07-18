/*************************************************************************
	> File Name: 14.test4.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    double x;
    scanf("%lf", &x);
    printf("%lf^%lf = %lf\n", x, 1.0 / 3.0, pow(x, 1.0 / 3.0));
    return 0;
}
