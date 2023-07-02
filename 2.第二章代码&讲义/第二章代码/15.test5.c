/*************************************************************************
	> File Name: 15.test5.c
	> Author: huguang
	> Mail: hug@haizeix.com
	> Created Time: 
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    double x;
    scanf("%lf", &x);
    printf("%lf\n", x / 180.0 * acos(-1));
    return 0;
}
